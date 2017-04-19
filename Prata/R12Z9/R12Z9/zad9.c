#include <stdio.h>
#include <string.h>

#define ROZMIAR 100

void pokaz_tablice(char ** tablica_slow, int ilosc);

int main(void) {
	int ilosc;
	char tymczasowe_slowo[ROZMIAR];
	int i = 0;
	char ** tablica_slow;

	printf("Podaj liczbe slow do wprowadzenia: ");
	scanf_s("%d", &ilosc);

	tablica_slow = (char **)malloc(ilosc * sizeof(char *));

	printf("Wprowadz %d slow:\n", ilosc);

	while (i < ilosc && scanf_s("%s", tymczasowe_slowo, ROZMIAR) == 1) {
		tablica_slow[i] = (char *)malloc((strlen(tymczasowe_slowo) + 1) * ilosc);

		for (int j = 0; j < strlen(tymczasowe_slowo) + 1; j++)
			tablica_slow[i][j] = tymczasowe_slowo[j];

		i++;
	}

	pokaz_tablice(tablica_slow, ilosc);

	return 0;
}

void pokaz_tablice(char ** tablica_slow, int ilosc) {
	puts("Oto wprowadzone slowa:");

	for (int i = 0; i < ilosc; i++)
		printf("%s\n", tablica_slow[i]);
}