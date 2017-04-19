#include <stdio.h>
#include <string.h>
#include <ctype.h>

int atoi(char * lancuch);
int znakNaLiczbe(char znak);

int main(void) {
	char *test = "10";
	int wynik;

	wynik = atoi(test);

	printf("Wynik: %d\n", wynik);

	return 0;
}

int atoi(char * lancuch) {
	int i;
	int znak = 1;
	int liczba;
	int wynik = 0;
	int miejsce = 1;

	for (i = (strlen(lancuch) - 1); i >= 0; i--) {
		if (i == 0 && !(isdigit(lancuch[0]) || lancuch[0] == '-' || lancuch[0] == '+')) {
			return 0;
		}
		if (i != 0 && !(isdigit(lancuch[i])))
			return 0;

		if (strlen(lancuch) > 1 && (lancuch[0] == '+' || lancuch[0] == '-') && lancuch[1] == '0')
			return 0;

		if (lancuch[0] == '0')
			return 0;

		if (lancuch[i] == '-') {
			znak = -1;
			continue;
		}

		if (lancuch[i] == '+')
			continue;

		liczba = znakNaLiczbe(lancuch[i]);
		wynik += miejsce * liczba;
		miejsce *= 10;
	}

	wynik *= znak;

	return wynik;
}

int znakNaLiczbe(char znak) {
	return znak - 48;
}