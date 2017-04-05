#include <stdio.h>

#define ROZMIAR 1000

int main(void) {
	char tab[ROZMIAR];
	char ch;
	int zmiany = 0;
	int i = 0;
	int j;

	printf("Podaj tekst do zmienienia (maksymalnie %d znakow; # konczy program).\n", ROZMIAR / 2);

	while (scanf_s("%c", &ch) && ch != '#') {
		if (ch == '.') {
			tab[i] = '!';
			zmiany++;
		} else if (ch == '!') {
			tab[i] = '!';
			i++;
			tab[i] = '!';
			zmiany++;
		} else {
			tab[i] = ch;
		}

		i++;
	}

	printf("Zmieniony tekst wyglada nastepujaco.\n");

	for (j = 0; j < i; j++) {
		printf("%c", tab[j]);
	}

	printf("Dokonano %d zmian.\n", zmiany);

	return 0;
}