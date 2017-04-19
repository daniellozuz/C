#include <stdio.h>
#include "pe12-2a.h"

int main(void) {
	int wybrany_tryb = 0;
	float wybrane_paliwo;
	float wybrany_dystans;

	int tryb;

	printf("Wybierz: 0 - system metryczny, 1 - system US: ");
	scanf_s("%d", &tryb);

	while (tryb >= 0) {
		wybrany_tryb = wybierz_tryb(tryb, wybrany_tryb);
		pobierz_dane(wybrany_tryb, &wybrany_dystans, &wybrane_paliwo);
		wyswietl_dane(wybrany_tryb, wybrany_dystans, wybrane_paliwo);

		printf("Wybierz: 0 - system metryczny, 1 - system US, (-1 aby zakonczyc):");
		scanf_s("%d", &tryb);
	}

	printf("Koniec\n");

	return 0;
}