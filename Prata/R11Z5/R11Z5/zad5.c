#include <stdio.h>

#define ROZMIAR 30
#define STOP "koniec\n"

char * znajdz_znak(char * lancuch, char znak);

int main(void) {
	char tekst[ROZMIAR];
	char znak;
	char * ptr;

	printf("Podaj lancuch w ktorym chcesz szukac (maksymalnie %d znakow; wpisz koniec aby zakonczyc).\n", ROZMIAR - 1);
	fgets(tekst, ROZMIAR, stdin);
	
	while (strcmp(tekst, STOP) != 0) {
		puts("Przyjalem");
		puts(tekst);

		printf("Podaj znak ktory chcesz znalezc.\n");
		scanf_s("%c", &znak);
		
		while (getchar() != '\n')
			continue;

		ptr = znajdz_znak(tekst, znak);
		printf("Wskaznik na tekst: %p\nWskaznik na znak: %p\n", tekst, ptr);

		printf("Podaj lancuch w ktorym chcesz szukac (maksymalnie %d znakow; wpisz koniec aby zakonczyc).\n", ROZMIAR - 1);
		fgets(tekst, ROZMIAR, stdin);
	}

	return 0;
}

char * znajdz_znak(char * lancuch, char znak) {
	int i;
	int dlugosc = strlen(lancuch);

	for (i = 0; i < dlugosc; i++)
		if (znak == lancuch[i])
			return lancuch + i;

	return NULL;
}