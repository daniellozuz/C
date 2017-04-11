#include <stdio.h>

char * wczytaj(char *z, int ile);

int main(void) {

	return 0;
}

char * wczytaj(char *z, int ile) {
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