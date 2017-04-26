#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

#define MAXTYT 41
#define MAXAUT 31
#define MAXKS 100

char * wczytaj(char * z, int ile);

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
		puts("Oto lista Twoich ksiazek:");
		for (int i = 0; i < licznik; i++)
			printf("%s, autor: %s, cena: %.2f zl\n", bibl[i].tytul, bibl[i].autor, bibl[i].wartosc);
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