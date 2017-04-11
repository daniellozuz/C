#include <stdio.h>

#define DLUGOSC 10

int main(void) {
	char slowa[DLUGOSC];
	int i;

	puts("Wprowadz lancuchy (pusty wiersz zakonczy program):");

	while (fgets(slowa, DLUGOSC, stdin) != NULL && slowa[0] != '\n') {
		i = 0;

		while (slowa[i] != '\n' && slowa[i] != '\0')
			i++;

		if (slowa[i] == '\n')
			slowa[i] = '\0';
		else
			while (getchar() != '\n')
				continue;

		puts(slowa);
	}

	puts("Gotowe.");

	return 0;
}