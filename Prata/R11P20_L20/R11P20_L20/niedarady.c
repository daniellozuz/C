#include <stdio.h>

#define ODPOWIEDZ "Grant"
#define ROZMIAR 40

char * wczytaj(char * z, int ile);

int main(void) {
	char proba[ROZMIAR];

	puts("Kto jest pochowany w grobowcu Granta?");
	wczytaj(proba, ROZMIAR);

	while (proba != ODPOWIEDZ) {
		puts("Niestety to nie jest dobra odpowiedz. Sprobuj jeszcze raz.");
		wczytaj(proba, ROZMIAR);
	}

	puts("Tak jest!");

	return 0;
}

char * wczytaj(char * z, int ile) {
	char * wynik;
	int i = 0;

	wynik = fgets(z, ile, stdin);

	if (wynik) {
		while (z[i] != '\n' && z[i] != '\0')
			i++;

		if (z[i] == '\n')
			z[i] = '\0';
		else
		while (getchar() != '\n')
			continue;
	}

	return wynik;
}