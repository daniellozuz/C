#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXTYT 40
#define MAXAUT 40
#define MAXKS 10

char * wczytaj(char * z, int ile);

struct ksiazka {
	char tytul[MAXTYT];
	char autor[MAXAUT];
	float wartosc;
};

int main(void) {
	struct ksiazka bibl[MAXKS];
	int licznik = 0;
	int index, licznikp;
	FILE * pksiazki;
	int rozmiar = sizeof(struct ksiazka);

	if ((pksiazki = fopen("ksiazki.dat", "a+b")) == NULL) {
		fputs("Nie moge otworzyc pliku ksiazki.dat\n", stderr);
		exit(1);
	}
	rewind(pksiazki);
	while (licznik < MAXKS && fread(&bibl[licznik], rozmiar, 1, pksiazki) == 1) {
		if (licznik == 0)
			puts("Biezaca zawartosc pliku ksiazki.dat:");
		printf("%s, autor: %s, cena: %.2f zl.\n", bibl[licznik].tytul, bibl[licznik].autor, bibl[licznik].wartosc);
		licznik++;
	}
	licznikp = licznik;
	if (licznik == MAXKS) {
		fputs("Plik ksiazki.dat jest pelny.", stderr);
		exit(2);
	}
	
	puts("Podaj nowe tytuly ksiazek, aby zakonczyc nacisnij [enter] na poczatku wiersza.");
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
		puts("Oto lista Twoich ksiazek:\n");
		for (index = 0; index < licznik; index++)
			printf("%s, autor: %s, cena: %.2f zl.\n", bibl[index].tytul, bibl[index].autor, bibl[index].wartosc);
		fwrite(&bibl[licznikp], rozmiar, licznik - licznikp, pksiazki);
	}
	else
		puts("Zadnych ksiazek? Szkoda.\n");

	puts("Koniec.");

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