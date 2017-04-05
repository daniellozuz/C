#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int ch;
	FILE *fp;
	char nazwplik[50];

	printf("Podaj nazwe pliku: ");
	scanf_s("%s", nazwplik, 50);

	fp = fopen(nazwplik, "r");
	
	if (fp == NULL) {
		printf("Blad przy probie otwarcia pliku.\n");
		exit(1);
	}
	
	while ((ch = getc(fp)) != EOF)
		putchar(ch);
	
	fclose(fp);

	// Open .exe file from directory where you have your .txt file (working directory errors).
	getchar();
	getchar();

	return 0;
}