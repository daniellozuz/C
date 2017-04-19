#include <stdio.h>

#define ROZMIAR 20
#define STOP "koniec"

void odwroc(char * lancuch);

void pobierz(char * lancuch);

int main(void) {
	char lancuch[ROZMIAR];

	printf("Podaj lancuch do odwrocenia (maksymalnie %d znakow; wpisz koniec aby zakonczyc)\n", ROZMIAR - 2);
	pobierz(lancuch);

	while (strcmp(lancuch, STOP) != 0) {
		puts("Przed odwroceniem:");
		puts(lancuch);

		odwroc(lancuch);

		puts("Po odwroceniu:");
		puts(lancuch);

		printf("Podaj lancuch do odwrocenia (maksymalnie %d znakow; wpisz koniec aby zakonczyc)\n", ROZMIAR - 2);
		pobierz(lancuch);
	}
	
	return 0;
}

void odwroc(char * lancuch) {
	int i;
	char temp;

	for (i = 0; i < (strlen(lancuch) / 2); i++) {
		temp = lancuch[i];
		lancuch[i] = lancuch[strlen(lancuch) - 1 - i];
		lancuch[strlen(lancuch) - 1 - i] = temp;
	}
}

void pobierz(char * lancuch) {
	fgets(lancuch, ROZMIAR, stdin);

	lancuch[strlen(lancuch) - 1] = '\0';
}