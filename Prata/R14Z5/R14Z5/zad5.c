#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "struktury.c"

#define ROZMIAR 4

void wyswietl(struct studenci * studenci, int ilosc);

int main(void) {
	struct student studenci[ROZMIAR] = {
		{
			{ "Daniel", "Zuziak" },
			{ 0 },
			0
		},
		{
			{ "Kamil", "Siudi" },
			{ 0 },
			0
		},
		{
			{ "Pan", "Tadeusz" },
			{ 0 },
			0
		},
		{
			{ "Adolf", "Olaf" },
			{ 0 },
			0
		}
	};

	float ocena;
	int ilosc;
	float suma;

	for (int i = 0; i < ROZMIAR; i++) {
		ilosc = 0;
		suma = 0;

		printf("Podaj oceny studenta %s %s (0 aby zakonczyc):\n", studenci[i].dane.imie, studenci[i].dane.nazwisko);
		while (scanf("%f", &ocena) == 1 && ilosc < ILOSC && ocena != 0) {
			studenci[i].oceny[ilosc++] = ocena;
			suma += ocena;
		}

		studenci[i].srednia = suma / ilosc;
	}

	wyswietl(studenci, ROZMIAR);

	float srednia = 0;
	for (int i = 0; i < ROZMIAR; i++) {
		srednia += studenci[i].srednia;
	}

	printf("Srednia ocen wszystkich studentow: %.1f", srednia / ROZMIAR);

	return 0;
}

void wyswietl(struct student * studenci, int ilosc) {
	int j;

	for (int i = 0; i < ilosc; i++) {
		printf("Imie i nazwisko: %s %s\n", studenci[i].dane.imie, studenci[i].dane.nazwisko);
		printf("Oceny: ");
		j = 0;
		while (studenci[i].oceny[j] != 0 && j < ILOSC)
			printf("%.1f ", studenci[i].oceny[j++]);
		putchar('\n');

		printf("Srednia ocen: %.1f\n\n", studenci[i].srednia);
	}
}