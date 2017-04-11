#include <stdio.h>
#include <string.h>

#define ROZMIAR 80

char * wczytaj(char * z, int ile);

int main(void) {
	char kwiat[ROZMIAR];
	char dodatek[] = " smierdza jak stare buty.";

	puts("Jakie kwiaty lubisz najbardziej?");
	
	if (wczytaj(kwiat, ROZMIAR)) {
		strcat_s(kwiat, ROZMIAR, dodatek);
		puts(kwiat);
		puts(dodatek);
	}

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