#include <stdio.h>
#include <string.h>

#define ROZMIAR 81
#define GRAN 20

void srtlan(char * lancuchy[], int num);
char * wczytaj(char * z, int ile);

int main(void) {
	char dane[GRAN][ROZMIAR];
	char * wsklan[GRAN];
	int licz = 0;
	int k;

	printf("Podaj maksymalnie %d wierszy, a ja je uporzadkuje.\n", GRAN);
	printf("Aby zakonczyc, wcisnij ENTER na poczatku wiersza.\n");

	while (licz < GRAN && wczytaj(dane[licz], ROZMIAR) != NULL && dane[licz][0] != '\0') {
		wsklan[licz] = dane[licz];
		licz++;
	}

	srtlan(wsklan, licz);

	puts("Oto uporzadkowana lista:\n");

	for (k = 0; k < licz; k++)
		puts(wsklan[k]);

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

void srtlan(char * lancuchy[], int num) {
	char *temp;
	int dol, szuk;
	
	for (dol = 0; dol < num - 1; dol++)
		for (szuk = dol + 1; szuk < num; szuk++)
			if (strcmp(lancuchy[dol], lancuchy[szuk]) > 0) {
				temp = lancuchy[dol];
				lancuchy[dol] = lancuchy[szuk];
				lancuchy[szuk] = temp;
			}
}