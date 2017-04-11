#include <stdio.h>
#include <string.h>

#define ROZMIAR			40
#define ROZMIAR_CELU	7
#define GRAN			5

char * wczytaj(char * z, int ile);

int main(void) {
	char vslowa[GRAN][ROZMIAR_CELU];
	char temp[ROZMIAR];
	int i = 0;

	printf("Podaj %d slow zaczynajacych sie na litere v.\n", GRAN);

	while (i < GRAN && wczytaj(temp, ROZMIAR)) {
		if (temp[0] != 'v')
			printf("%s nie zaczyna sie na v!\n", temp);
		else {
			strncpy_s(vslowa[i], ROZMIAR_CELU, temp, ROZMIAR_CELU - 1);
			vslowa[i][ROZMIAR_CELU - 1] = '\0';
			i++;
		}
	}

	puts("Oto przyjete slowa:");

	for (i = 0; i < GRAN; i++)
		puts(vslowa[i]);

	return 0;
}

char * wczytaj(char * z, int ile) {
	char * wynik;
	int i = 0;

	wynik = fgets(z, ile, stdin);

	if (wynik) {
		while (z[i] != '\n' && z[i] != '\0')
			i++;

		if (z[i] == '\n')
			z[i] = '\0';
		else
		while (getchar() != '\n')
			continue;
	}

	return wynik;
}