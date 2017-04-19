#include <stdio.h>
#include "pe12-2a.h"

int wybierz_tryb(int tryb, int wybrany_tryb) {
	if (tryb >= 2) {
		printf("Niewlasciwy tryb. Przywrocono poprzedni wybrany tryb.\n");
		return wybrany_tryb;
	}

	if (tryb == 0)
		return tryb;
		
	if (tryb == 1)
		return tryb;
}

void pobierz_dane(int wybrany_tryb, float * wybrany_dystans, float * wybrane_paliwo) {
	if (wybrany_tryb == 0) {
		printf("Podaj przebyta odleglosc w kilometrach: ");
		scanf_s("%f", wybrany_dystans);

		printf("Podaj zuzyte paliwo w litrach: ");
		scanf_s("%f", wybrane_paliwo);
	}
	else {
		printf("Podaj przebyta odleglosc w milach: ");
		scanf_s("%f", wybrany_dystans);

		printf("Podaj zuzyte paliwo w galonach: ");
		scanf_s("%f", wybrane_paliwo);
	}
}

void wyswietl_dane(int wybrany_tryb, float wybrany_dystans, float wybrane_paliwo) {
	if (wybrany_tryb == 0)
		printf("Zuzycie paliwa wynioslo %.1f litrow na 100 km.\n", 100 * wybrane_paliwo / wybrany_dystans);

	if (wybrany_tryb == 1)
		printf("Zuzycie paliwa wynioslo %.1f mil na galon.\n", wybrany_dystans / wybrane_paliwo);
}