#include <stdio.h>

#define ROZMIAR 30

char * kopiuj(char * s1, char * s2, int n);

int main(void) {
	char tekst1[ROZMIAR];
	char tekst2[ROZMIAR] = "Daniel";
	char * zwrot;
	int ilosc = 10;

	zwrot = kopiuj(tekst1, tekst2, ilosc);

	printf("Skopiowano %d liter z tekst2: %s do tekst1: %s\nAdres tekst1: %p\nAdres tekst2: %p\nAdres zwrot: %p\n", ilosc, tekst2, tekst1, tekst1, tekst2, zwrot);

	return 0;
}

char * kopiuj(char * s1, char * s2, int n) {
	int i;

	for (i = 0; i < n; i++) {
		s1[i] = s2[i];
	}

	s1[i] = '\0';

	return s1;
}