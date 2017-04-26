#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define DLUGOSC 4

char *nazwy[] = {	"sty", "lut", "mar", "kwi", "maj", "cze", "lip", "sie", "wrz", "paz", "lis", "gru",
					"styczen", "luty", "marzec", "kwiecien", "maj", "czerwiec", "lipiec", "sierpien", "wrzesien", "pazdziernik", "listopad", "grudzien",
					"1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12" };

int ile_dni(char * nazwa, int rok);
char * wczytaj(char * z, int ile);

int main(void) {
	char nazwa[DLUGOSC];
	int dzien;
	int rok;

	puts("Podaj 3-literowy skrot nazwy miesiaca.");
	wczytaj(nazwa, DLUGOSC);
	puts("Podaj dzien miesiaca.");
	scanf("%d", &dzien);
	puts("Podaj rok (sprawdze czy przestepny).");
	scanf("%d", &rok);

	printf("Dzien ktory podales jest %d dniem roku.\n", ile_dni(nazwa, dzien, rok));

	return 0;
}

int ile_dni(char * nazwa, int dzien, int rok) {
	int wybor = -1;
	int miesiace[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int dni = 0;

	if (rok % 4 == 0)
		miesiace[1] = 29;

	for (int i = 0; i < 36; i++) {
		if (strcmp(nazwa, nazwy[i]) == 0)
			wybor = i % 12;
	}
	if (wybor == -1)
		return -1;

	for (int i = 0; i < wybor; i++)
		dni += miesiace[i];

	return dni + dzien;
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