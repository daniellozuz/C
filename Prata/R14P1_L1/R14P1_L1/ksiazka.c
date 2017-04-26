#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

#define MAXTYT 41
#define MAXAUT 31

char * wczytaj(char * z, int ile);

struct ksiazka {
	char tytul[MAXTYT];
	char autor[MAXAUT];
	float wartosc;
};

int main(void) {
	struct ksiazka bibl;

	puts("Podaj tytul ksiazki.");
	wczytaj(bibl.tytul, MAXTYT);
	
	puts("Teraz podaj autora.");
	wczytaj(bibl.autor, MAXAUT);
	
	puts("Teraz podaj wartosc.");
	scanf("%f", &bibl.wartosc);
	
	printf("%s, autor: %s, cena: %.2f zl\n", bibl.tytul, bibl.autor, bibl.wartosc);
	printf("%s: \"%s\" (%.2f zl)\n", bibl.autor, bibl.tytul, bibl.wartosc);
	
	puts("Gotowe.");

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