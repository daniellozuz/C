#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXTYT 41
#define MAXAUT 31
#define MAXKS 100

char * wczytaj(char * z, int ile);
void sortuj(struct ksiazka ** tab_wsk, int licznik);

struct ksiazka {
	char tytul[MAXTYT];
	char autor[MAXAUT];
	float wartosc;
};

int main(void) {
	struct ksiazka bibl[MAXKS];
	int licznik = 0;

	puts("Podaj tytul ksiazki (aby zakonczyc nacisnij [enter] na poczatku wiersza).");

	while (licznik < MAXKS && wczytaj(bibl[licznik].tytul, MAXTYT) != NULL && bibl[licznik].tytul[0] != '\0') {
		puts("Teraz podaj autora.");
		wczytaj(bibl[licznik].autor, MAXAUT);

		puts("Teraz podaj wartosc.");
		scanf("%f", &bibl[licznik++].wartosc);

		while (getchar() != '\n')
			continue;

		if (licznik < MAXKS)
			puts("Podaj kolejny tytul.");
	}

	if (licznik > 0) {
		struct ksiazka ** tab_wsk = (struct ksiazka *)malloc(licznik * sizeof(struct ksiazka *));
		for (int i = 0; i < licznik; i++)
			tab_wsk[i] = &bibl[i];

		sortuj(tab_wsk, licznik);

		puts("Oto lista Twoich ksiazek:");
		for (int i = 0; i < licznik; i++)
			printf("%s, autor: %s, cena: %.2f zl\n", tab_wsk[i]->tytul, tab_wsk[i]->autor, tab_wsk[i]->wartosc);

		free(tab_wsk);

		float wartosc = 0;
		for (int i = 0; i < licznik; i++)
			wartosc += bibl[i].wartosc;

		printf("Calkowita wartosc Twoich ksiazek wynosi: %.2f zl\n", wartosc);
	}
	else
		puts("Zadnych ksiazek? Szkoda.");

	return 0;
}

char * wczytaj(char * z, int ile) {
	char * tutaj;
	char * wynik;

	if (wynik = fgets(z, ile, stdin)) {
		if (tutaj = strchr(z, '\n'))
			*tutaj = '\0';
		else {
			while (getchar() != '\n')
				continue;
		}
	}

	return wynik;
}

void sortuj(struct ksiazka ** tab_wsk, int licznik) {
	struct ksiazka * temp;

	for (int i = 0; i < licznik - 1; i++) {
		for (int j = i + 1; j < licznik; j++) {
			if (strcmp(tab_wsk[i]->tytul, tab_wsk[j]->tytul) > 0) {
				temp = tab_wsk[i];
				tab_wsk[i] = tab_wsk[j];
				tab_wsk[j] = temp;
			}
		}
	}
}