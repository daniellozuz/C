#include <stdio.h>

void prostokat_znakow(char ch, int dlugosc, int wiersze);

int main(void) {
	char znak = '$';
	int ilosc_wierszy = 5;
	int dlugosc = 6;

	prostokat_znakow(znak, dlugosc, ilosc_wierszy);

	return 0;
}


void prostokat_znakow(char ch, int d, int w) {
	int i, j;

	for (i = 0; i < w; i++) {
		for (j = 0; j < d; j++) {
			putchar(ch);
		}
		putchar('\n');
	}
}