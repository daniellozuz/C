#include <stdio.h>

#define ROZMIAR 1000

int main(int argc, char * argv[]) {
	char ch;
	char tekst[ROZMIAR];
	int i = 0;

	while (i < (ROZMIAR - 1) && (ch = getchar()) != EOF) {
		tekst[i] = ch;
		i++;
	}
	tekst[i] = '\0';

	if (argc == 1)
		puts(tekst);
	else if (argc == 2) {
		if (!strcmp(argv[1], "-p"))
			puts(tekst);
		else if (!strcmp(argv[1], "-u")) {
			for (i = 0; i < strlen(tekst); i++)
				tekst[i] = toupper(tekst[i]);

			puts(tekst);
		}
		else if (!strcmp(argv[1], "-l")) {
			for (i = 0; i < strlen(tekst); i++)
				tekst[i] = tolower(tekst[i]);

			puts(tekst);
		}
		else
			puts("Niepoprawny argument wiersza polecen.");
	}
	else
		puts("Niepoprawny argument wiersza polecen.");

	return 0;
}