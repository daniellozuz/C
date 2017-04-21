#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]) {
	FILE * fp;
	char znak, ch;
	int licznik = 0;

	if (argc < 2) {
		fprintf(stderr, "Sposob uzycia: %s znak (plik1 plik2 ...)\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	if (argc == 2) {
		licznik = 0;
		znak = argv[1][0];
		printf("Podaj tekst, w ktorym chcesz szukac znaku %c (EOF konczy program)\n", znak);

		while ((ch = getchar()) != EOF) {
			if (ch == znak)
				licznik++;
		}

		printf("W podanym tekscie znaleziono %d wystapien znaku %c.\n", licznik, znak);
	}
	else {
		for (int i = 2; i < argc; i++) {
			if ((fp = fopen(argv[i], "r")) == NULL) {
				fprintf(stderr, "Blad przy odczycie %s\n", argv[i]);
				continue;
			}

			licznik = 0;
			znak = argv[1][0];

			while ((ch = getc(fp)) != EOF) {
				if (ch == znak)
					licznik++;
			}

			printf("W pliku %s znaleziono znak %c %d razy.\n", argv[i], znak, licznik);

			if (fclose(fp))
				fprintf(stderr, "Blad przy zamykaniu %s\n", argv[i]);
		}
	}

	return 0;
}