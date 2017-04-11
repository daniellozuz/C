#include <stdio.h>
#include <stdlib.h>

#define LIMIT 30

char * wczytaj(char * z, int ile);

int main(void) {
	char liczba[LIMIT];
	char * koniec;
	long wartosc;

	puts("Podaj liczbe (wpisz pusty wiersz aby zakonczyc):");

	while (wczytaj(liczba, LIMIT) && liczba[0] != '\0') {
		wartosc = strtol(liczba, &koniec, 10);
		printf("Wartosc: %ld poprzedza %s (%d)\n", wartosc, koniec, *koniec);
		
		wartosc = strtol(liczba, &koniec, 16);
		printf("Wartosc: %ld poprzedza %s (%d)\n", wartosc, koniec, *koniec);
		
		puts("Nastepna liczba:");
	}

	puts("Do widzenia!");

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