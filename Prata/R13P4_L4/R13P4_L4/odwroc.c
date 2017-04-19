#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#define CTRL_Z '\032'
#define DLAN 81

int main(void) {
	char plik[DLAN];
	char ch;
	FILE * wp;
	long licznik, koniec;
	
	puts("Podaj nazwe pliku:");
	scanf("%80s", plik);
	if ((wp = fopen(plik, "rb")) == NULL) {
		printf("Nie moge otworzyc %s\n", plik);
		exit(EXIT_FAILURE);
	}

	fseek(wp, 0L, SEEK_END);
	koniec = ftell(wp);
	
	for (licznik = 1L; licznik <= koniec; licznik++) {
		fseek(wp, -licznik, SEEK_END);
		ch = getc(wp);
	
		if (ch != CTRL_Z && ch != '\r')
			putchar(ch);
	}

	putchar('\n');
	fclose(wp);

	return 0;
}