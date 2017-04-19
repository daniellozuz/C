#include <stdio.h>

extern void srand1(unsigned int x);
extern int rand1(void);

int main(void) {
	int liczba;
	unsigned ziarno;

	printf("Podaj wartosc ziarna (k to koniec):\n");

	while (scanf_s("%u", &ziarno) == 1) {
		srand1(ziarno);

		for (liczba = 0; liczba < 5; liczba++)
			printf("%hd\n", rand1());

		printf("Podaj nastepna wartosc ziarna (k to koniec):\n");
	}

	printf("Koniec\n");

	return 0;
}