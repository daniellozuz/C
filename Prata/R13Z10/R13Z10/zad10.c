#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#define DL 41

int main(void) {
	FILE * fp;
	char nazwa[DL];
	long int dlugosc = 0L;
	long int polozenie;
	char ch;

	puts("Podaj nazwe pliku, ktory chcesz odczytac.");
	scanf("%s", nazwa);

	if ((fp = fopen(nazwa, "r")) == NULL) {
		fprintf(stderr, "Blad przy otwarciu pliku %s.\n", nazwa);
		exit(EXIT_FAILURE);
	}

	fseek(fp, 0L, SEEK_END);
	dlugosc = ftell(fp);

	printf("Podaj polozenie w pliku, od ktorego chcesz zaczac wyswietlanie (0 - %ld)\n", dlugosc);
	while (scanf("%ld", &polozenie) == 1 && polozenie <= dlugosc && polozenie >= 0) {
		fseek(fp, polozenie, SEEK_SET);

		while ((ch = getc(fp)) != EOF && ch != '\n')
			putchar(ch);

		printf("\nPodaj polozenie w pliku, od ktorego chcesz zaczac wyswietlanie (0 - %ld)\n", dlugosc);
	}

	return 0;
}