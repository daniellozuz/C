#include <stdio.h>

#define POCHWALA "Ach, jakie wspaniale imie!"

int main(void) {
	char imie[40];
	printf("Jak masz na imie?\n");
	scanf_s("%s", imie, 40);
	printf("Witaj, %s. %s\n", imie, POCHWALA);

	return 0;
}