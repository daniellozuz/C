#include <stdio.h>

int jednostki = 0;

void krytyka(void);

int main(void) {
	extern int jednostki;

	printf("Ile funtow masla miesci sie w barylce?\n");

	scanf_s("%d", &jednostki);

	while (jednostki != 56)
		krytyka();

	printf("Musiales podejrzec!\n");

	return 0;
}

void krytyka(void) {
	printf("Nie masz szczescia, sprobuj ponownie.\n");
	
	scanf_s("%d", &jednostki);
}