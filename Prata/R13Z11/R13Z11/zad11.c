#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ROZMIAR 255

int main(int argc, char * argv[]) {
	FILE * fp;
	char wiersz[ROZMIAR];
	
	if (argc != 3) {
		fprintf(stderr, "Sposob uzycia: %s lancuch plik.txt\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	if ((fp = fopen(argv[2], "r")) == NULL) {
		fprintf(stderr, "Blad przy otwarciu %s\n", argv[2]);
		exit(EXIT_FAILURE);
	}

	printf("Znaleziono nastepujace wiersze, w ktorych wystepuje %s\n", argv[1]);
	while ((fgets(wiersz, ROZMIAR, fp)) != NULL) {
		if (strstr(wiersz, argv[1]) != NULL)
			fputs(wiersz, stdout);
	}

	if (fclose(fp))
		fprintf(stderr, "Blad przy zamknieciu pliku.");

	return 0;
}