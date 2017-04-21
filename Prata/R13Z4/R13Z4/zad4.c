#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]) {
	FILE * fp;
	char ch;

	if (argc < 2) {
		printf("Sposob uzycia: %s wyswietlany_plik_1 wyswietlany_plik_2 ... wyswietlany_plik_n", argv[0]);
		exit(EXIT_FAILURE);
	}

	for (int i = 1; i < argc; i++) {
		if ((fp = fopen(argv[i], "r")) == NULL) {
			printf("Nie moge otworzyc %s\n", argv[i]);
			continue;
		}

		while ((ch = getc(fp)) != EOF) {
			putc(ch, stdout);
		}

		putchar('\n');

		if (fclose(fp))
			puts("Blad przy zamknieciu pliku.");
	}

	return 0;
}