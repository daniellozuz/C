#include <stdio.h>

#define DLUGOSC 4

char *nazwy[] = { "sty", "lut", "mar", "kwi", "maj", "cze", "lip", "sie", "wrz", "paz", "lis", "gru" };

int ile_dni(char * nazwa);
char * wczytaj(char * z, int ile);

int main(void) {
	char nazwa[DLUGOSC];

	puts("Podaj 3-literowy skrot nazwy miesiaca.");
	wczytaj(nazwa, DLUGOSC);
	
	printf("Ostatni dzien miesiaca jest %d dniem roku.\n", ile_dni(nazwa));

	return 0;
}

int ile_dni(char * nazwa) {
	int wybor = -1;
	int miesiace[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int dni = 0;

	for (int i = 0; i < 12; i++) {
		if (strcmp(nazwa, nazwy[i]) == 0)
			wybor = i;
	}
	if (wybor == -1)
		return -1;

	for (int i = 0; i <= wybor; i++)
		dni += miesiace[i];

	return dni;
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