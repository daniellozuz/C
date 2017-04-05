#include <stdio.h>

int main(void) {
	int nowa_linia = 0;
	int odstepy = 0;
	int znaki = 0;
	char ch;

	printf("Podaj cokolwiek chcesz (# aby zakonczyc).\n");

	while (scanf_s("%c", &ch) && ch != '#') {
		znaki++;

		if (ch == '\n')
			nowa_linia++;

		if (ch == ' ')
			odstepy++;
	}

	printf("Podales %d znakow, z czego %d to znaki nowej linii, %d to ilosc odstepow, a %d to pozostale wprowadzone znaki.\n", znaki, nowa_linia, odstepy, znaki - nowa_linia - odstepy);

	return 0;
}