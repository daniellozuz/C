#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define DL 81

struct daneos {
	char * imie;
	char * nazwisko;
	int litery;
};

void pobierz(struct daneos *);
void oblicz(struct daneos *);
void pokaz(const struct daneos *);
void wyczysc(struct daneos *);
char * wczytaj(char * z, int ile);

int main(void) {
	struct daneos osoba;

	pobierz(&osoba);
	oblicz(&osoba);
	pokaz(&osoba);
	wyczysc(&osoba);

	return 0;
}

void pobierz(struct daneos * wsk) {
	char temp[DL];

	puts("Podaj swoje imie.");
	wczytaj(temp, DL);
	wsk->imie = (char *)malloc(strlen(temp) + 1);
	strcpy(wsk->imie, temp);
	
	puts("Podaj swoje nazwisko.");
	wczytaj(temp, DL);
	wsk->nazwisko = (char *)malloc(strlen(temp) + 1);
	strcpy(wsk->nazwisko, temp);
}

void oblicz(struct daneos * wsk) {
	wsk->litery = strlen(wsk->imie) + strlen(wsk->nazwisko);
}

void pokaz(const struct daneos * wsk) {
	printf("%s %s, Twoje imie i nazwisko skladaja sie w sumie z %d liter.\n", wsk->imie, wsk->nazwisko, wsk->litery);
}

void wyczysc(struct daneos * wsk) {
	free(wsk->imie);
	free(wsk->nazwisko);
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