#include <stdio.h>

int * stworz_tablice(int ilosc, int wartosc);
void pokaz_tablice(const int * tab, int rozmiar);

int main(void) {
	int * wt;
	int rozmiar;
	int wartosc;

	printf("Podaj liczbe elementow: ");

	while (scanf_s("%d", &rozmiar) == 1 && rozmiar > 0) {
		printf("Podaj wartosc poczatkowa: ");
		scanf_s("%d", &wartosc);

		wt = stworz_tablice(rozmiar, wartosc);

		if (wt) {
			pokaz_tablice(wt, rozmiar);
			free(wt);
		}
		
		printf("Podaj liczbe elementow: ");
	}

	puts("Koniec.");

	return 0;
}

int * stworz_tablice(int ilosc, int wartosc) {
	int * tablica = (int *)malloc(ilosc * sizeof(int));

	for (int i = 0; i < ilosc; i++)
		tablica[i] = wartosc;

	return tablica;
}

void pokaz_tablice(const int * tab, int rozmiar) {
	for (int i = 0; i < rozmiar; i++) {
		printf("%d ", tab[i]);

		if (i % 8 == 7)
			putchar('\n');
	}

	putchar('\n');
}