#include <stdio.h>
#include <stdbool.h>

#define ROZMIAR 30
#define STOP "koniec\n"

bool znajduje_sie_w(char znak, char * lancuch);

int main(void) {
	char tekst[ROZMIAR];
	char znak;
	bool check;
	
	printf("Podaj tekst w ktorym szukasz znaku. (maksymalnie %d znakow; wpisz koniec aby zakonczyc)\n", ROZMIAR - 1);
	fgets(tekst, ROZMIAR, stdin);

	while (strcmp(tekst, STOP) != 0) {
		printf("Podaj znak ktorego szukasz w tekscie.\n");
		scanf_s("%c", &znak);

		if (znak != '\n')
			while (getchar() != '\n')
				continue;

		check = znajduje_sie_w(znak, tekst);

		printf("Funkcja zwrocila %d\n", check);

		printf("Podaj tekst w ktorym szukasz znaku. (maksymalnie %d znakow; wpisz koniec aby zakonczyc)\n", ROZMIAR - 1);
		fgets(tekst, ROZMIAR, stdin);
	}

	return 0;
}

bool znajduje_sie_w(char znak, char * lancuch) {
	int i;

	for (i = 0; i < strlen(lancuch); i++)
		if (znak == lancuch[i])
			return true;

	return false;
}