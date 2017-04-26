#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define DLUGOSC 81

char * wczytaj(char * z, int ile);
char pokazmenu(void);
void usunwiersz(void);
void pokaz(void(*fp)(char *), char * str);
void DuzeLit(char *);
void MaleLit(char *);
void Odwroc(char *);
void Atrapa(char *);

int main(void) {
	char wiersz[DLUGOSC];
	char kopia[DLUGOSC];
	char wybor;
	void(*wfun)(char *);

	puts("Podaj lancuch (pusty wiersz konczy program):");
	while (wczytaj(wiersz, DLUGOSC) != NULL && wiersz[0] != '\0') {
		while ((wybor = pokazmenu()) != 'n') {
			switch (wybor) {
			case 'd': wfun = DuzeLit; break;
			case 'm': wfun = MaleLit; break;
			case 'o': wfun = Odwroc; break;
			case 'b': wfun = Atrapa; break;
			}

			strcpy(kopia, wiersz);
			pokaz(wfun, kopia);
		}

		puts("Podaj lancuch (pusty wiersz konczy program):");
	}

	puts("Czesc!");

	return 0;
}

char pokazmenu(void) {
	char odp;

	puts("Wybierz jedna opcje:");
	puts("d) duze litery         m) male litery");
	puts("o) odwrocenie liter    b) bez zmian");
	puts("n) nastepny lancuch");
	odp = tolower(getchar());
	usunwiersz();
	while (strchr("dmobn", odp) == NULL) {
		puts("Wpisz d, m, o, b lub n:");
		odp = tolower(getchar());
		usunwiersz();
	}

	return odp;
}

void usunwiersz(void) {
	while (getchar() != '\n')
		continue;
}

void DuzeLit(char * lan) {
	while (*lan != '\0') {
		*lan = toupper(*lan);
		lan++;
	}
}

void MaleLit(char * lan) {
	while (*lan != '\0') {
		*lan = tolower(*lan);
		lan++;
	}
}

void Odwroc(char * lan) {
	while (*lan != '\0') {
		if (islower(*lan))
			*lan = toupper(*lan);
		else
			*lan = tolower(*lan);
		lan++;
	}
}

void Atrapa(char * lan) {
	// Pusto
}

void pokaz(void(*fw)(char *), char * lan) {
	(*fw)(lan);
	puts(lan);
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