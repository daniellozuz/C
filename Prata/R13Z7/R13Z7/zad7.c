#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]) {
	FILE * fp1, * fp2;
	char ch;

	if (argc != 3) {
		fprintf(stderr, "Sposob uzycia: %s plik1 plik2\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	if ((fp1 = fopen(argv[1], "r")) == NULL) {
		fprintf(stderr, "Nie moge otworzyc %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	if ((fp2 = fopen(argv[2], "r")) == NULL) {
		fprintf(stderr, "Nie moge otworzyc %s\n", argv[2]);
		exit(EXIT_FAILURE);
	}

	while (fp1 != NULL || fp2 != NULL) {
		if (fp1 != NULL) {
			while ((ch = getc(fp1)) != EOF && ch != '\n')
				putchar(ch);

			if (ch == EOF) {
				fclose(fp1);
				fp1 = NULL;
			}
		}

		if (fp2 != NULL) {
			while ((ch = getc(fp2)) != EOF && ch != '\n')
				putchar(ch);

			if (ch == EOF) {
				fclose(fp2);
				fp2 = NULL;
			}
		}

		putchar('\n');
	}

	return 0;
}