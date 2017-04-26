#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define MAXTYT 40
#define MAXAUT 40
#define MAXKS 10

struct ksiazka {
	char tytul[MAXTYT];
	char autor[MAXAUT];
	float wartosc;
	bool usun;
};

char * wczytaj(char * z, int ile);

int main(void) {
	struct ksiazka bibl[MAXKS];
	int licznik = 0;
	int index, licznikp;
	FILE * pksiazki;
	int rozmiar = sizeof(struct ksiazka);

	if ((pksiazki = fopen("ksiazki.dat", "r+b")) == NULL) {
		fputs("Nie moge otworzyc pliku ksiazki.dat\n", stderr);
		exit(1);
	}
	rewind(pksiazki);
	while (licznik < MAXKS && fread(&bibl[licznik], rozmiar, 1, pksiazki) == 1) {
		if (licznik == 0)
			puts("Biezaca zawartosc pliku ksiazki.dat");
		printf("%d. %s, autor: %s, cena: %.2f zl\n", licznik + 1, bibl[licznik].tytul, bibl[licznik].autor, bibl[licznik].wartosc);
		licznik++;
	}
	licznikp = licznik;
	if (licznik == MAXKS) {
		fputs("Plik ksiazki.dat jest pelny.\n", stderr);
		exit(2);
	}

	puts("\nPodaj nowe tytuly ksiazek:");
	puts("Aby zakonczyc, nacisnij [enter] na poczatku wiersza.");
	while (licznik < MAXKS && wczytaj(bibl[licznik].tytul, MAXTYT) != NULL && bibl[licznik].tytul[0] != '\0') {
		puts("Teraz podaj autora:");
		wczytaj(bibl[licznik].autor, MAXAUT);
		puts("Teraz podaj wartosc:");
		scanf("%f", &bibl[licznik].wartosc);
		bibl[licznik++].usun = false;
		while (getchar() != '\n')
			continue;
		if (licznik < MAXKS)
			puts("Podaj nastepny tytul:");
	}

	puts("Aby edytowac/usunac ksiazke podaj jej numer (musi on byc poprawny, aby zakonczyc wpisz 0).");
	int numer;
	char temp[MAXTYT];
	while ((scanf("%d", &numer) == 1) && numer > 0 && licznik > 0 && numer <= licznik) {
		while (getchar() != '\n')
			continue;
		puts("Wpisz nowy tytul. (wpisz delete aby usunac ksiazke).");
		if (wczytaj(temp, MAXTYT) != NULL) {
			if (strcmp(temp, "delete") != 0) {
				strcpy(bibl[numer - 1].tytul, temp);
				puts("Teraz podaj autora:");
				wczytaj(bibl[numer - 1].autor, MAXAUT);
				puts("Teraz podaj wartosc:");
				scanf("%f", &bibl[numer - 1].wartosc);
				bibl[numer - 1].usun = false;
			}
			else {
				bibl[numer - 1].usun = true;
			}
			if (licznik > 0) {
				rewind(pksiazki);
				puts("Oto lista Twoich ksiazek:\n");
				index = 0;
				while (index < licznik) {
					if (bibl[index].usun == false) {
						printf("%d. %s, autor: %s, cena: %.2f zl\n", index + 1, bibl[index].tytul, bibl[index].autor, bibl[index].wartosc);
						//fwrite(&bibl[index], rozmiar, 1, pksiazki);
					}
					index++;
				}
			}
			else
				puts("Zadnych ksiazek? Szkoda.");
		}
		puts("Aby edytowac/usunac ksiazke podaj jej numer (aby zakonczyc wpisz 0).");
	}

	if (fclose(pksiazki)) {
		fputs("Nie moge zamknac pliku ksiazki.dat\n", stderr);
		exit(3);
	}

	if ((pksiazki = fopen("ksiazki.dat", "w+b")) == NULL) {
		fputs("Nie moge otworzyc pliku ksiazki.dat\n", stderr);
		exit(4);
	}

	if (licznik > 0) {
		rewind(pksiazki);
		puts("Oto lista Twoich ksiazek:\n");
		index = 0;
		while (index < licznik) {
			if (bibl[index].usun == false) {
				printf("%d. %s, autor: %s, cena: %.2f zl\n", index + 1, bibl[index].tytul, bibl[index].autor, bibl[index].wartosc);
				fwrite(&bibl[index], rozmiar, 1, pksiazki);
			}
			index++;
		}
	}
	else
		puts("Zadnych ksiazek? Szkoda.");

	puts("\n\nKoniec.");

	return 0;
}

char * wczytaj(char * z, int ile) {
	char * wynik;
	char * tutaj;

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