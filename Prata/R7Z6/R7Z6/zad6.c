#include <stdio.h>

int main(void) {
	char ch;
	char poprz = '0';
	int ilosc = 0;

	printf("Podaj tekst (# aby zakonczyc).\n");

	while ((ch = getchar()) != '#') {
		if (poprz = 'o' && ch == 't')
			ilosc++;

		poprz = ch;
	}

	printf("Wystapilo %d ciagow 'ot'.\n", ilosc);

	return 0;
}