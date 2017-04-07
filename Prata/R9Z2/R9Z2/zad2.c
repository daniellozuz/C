#include <stdio.h>

void rzad_zn(char ch, int i, int j);

int main(void) {
	int poczatek = 3;
	int koniec = 3;

	rzad_zn('$', poczatek, koniec);

	return 0;
}

void rzad_zn(char ch, int i, int j) {
	int indeks;
	
	for (indeks = 1; indeks < i; indeks++)
		putchar(' ');

	for (indeks = 0; indeks <= j - i; indeks++)
		putchar(ch);

	putchar('\n');
}