#include <stdio.h>

void krytyka(int * ptr);

int main(void) {
	int jednostki = 0;
	int * ptr = &jednostki;

	printf("Ile funtow masla miesci sie w barylce?\n");
	scanf_s("%d", &jednostki);

	while (jednostki != 56)
		krytyka(ptr);

	printf("Musiales podejrzec!\n");

	return 0;
}

void krytyka(int * ptr) {
	printf("Nie masz szczescia, sprobuj ponownie.\n");
	scanf_s("%d", ptr);
}