#include <stdio.h>

void wyswietl(char c, int wysokosc, int szerokosc);

int main(void) {
	int ch;
	int rzedy, kolumny;

	printf("Podaj znak i dwie liczby calkowite.\n");

	while ((ch = getchar()) != EOF) {
		if (ch != '\n') {
			if (scanf_s("%d %d", &rzedy, &kolumny) != 2)
				break;

			wyswietl(ch, rzedy, kolumny);

			printf("Podaj kolejny znak i dwie liczby calkowite.\n");
			printf("Aby zakonczyc, zasymuluj EOF.\n");
		}
	}

	printf("Do zobaczenia.\n");

	return 0;
}

void wyswietl(char c, int wysokosc, int szerokosc) {
	int rzad, kol;

	for (rzad = 1; rzad <= wysokosc; rzad++) {
		for (kol = 1; kol <= szerokosc; kol++)
			putchar(c);
		putchar('\n');
	}
}