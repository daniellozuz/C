#include <stdio.h>
#include <ctype.h>

int main(void) {
	int ch;
	int poprz = '.';
	int litery = 0;
	int slowa = 0;
	float srednia;

	while ((ch = getchar()) != EOF) {
		if (isalpha(ch))
			litery++;
		if (isalpha(ch) && !isalpha(poprz))
			slowa++;

		poprz = ch;
	}

	srednia = (float)litery / slowa;

	printf("Odczytano %d liter i %d slow.\nSrednio %.2f liter na slowo.\n", litery, slowa, srednia);

	return 0;
}