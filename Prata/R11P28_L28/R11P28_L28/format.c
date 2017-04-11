#include <stdio.h>

#define MAX 20

char * wczytaj(char * z, int ile);

int main(void) {
	char imie[MAX];
	char nazwisko[MAX];
	char formal[2 * MAX + 10];
	double wygrana;

	puts("Podaj swoje imie:");
	wczytaj(imie, MAX);

	puts("Podaj swoje nazwisko:");
	wczytaj(nazwisko, MAX);

	puts("Podaj wygrana sume pieniedzy:");
	scanf_s("%lf", &wygrana);

	sprintf_s(formal, 2 * MAX + 10, "%s, %-19s: %6.2f zl\n", nazwisko, imie, wygrana);
	puts(formal);

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