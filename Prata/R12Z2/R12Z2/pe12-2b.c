#include <stdio.h>
#include "pe12-2a.h"

int wybrany_tryb;
int wybrany_dystans;
int wybrane_paliwo;

int main(void) {
	int tryb;

	printf("Wybierz: 0 - system metryczny, 1 - system US: ");
	scanf_s("%d", &tryb);

	while (tryb >= 0) {
		wybierz_tryb(tryb);
		pobierz_dane();
		wyswietl_dane();

		printf("Wybierz: 0 - system metryczny, 1 - system US, (-1 aby zakonczyc):");
		scanf_s("%d", &tryb);
	}

	printf("Koniec\n");

	return 0;
}