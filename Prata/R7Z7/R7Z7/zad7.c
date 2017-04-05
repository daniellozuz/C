#include <stdio.h>

#define STAWKA 40
#define NADGODZINY 1.5 * STAWKA

#define PROG 40

#define PROG1 1200
#define PROG2 (600 + PROG1)

#define PODATEK1 0.15
#define PODATEK2 0.20
#define PODATEK3 0.25

int main(void) {
	int godz;
	float wyn;

	printf("Podaj ilosc przepracowanych godzin w tygodniu.\n");

	scanf_s("%d", &godz);

	if (godz <= PROG)
		wyn = godz * STAWKA;
	else
		wyn = PROG * STAWKA + (godz - PROG) * NADGODZINY;

	if (wyn <= PROG1)
		wyn -= wyn * PODATEK1;
	else if (wyn <= PROG2)
		wyn -= PROG1 * PODATEK1 + (wyn - PROG1) * PODATEK2;
	else
		wyn -= PROG1 * PODATEK1 + (PROG2 - PROG1) * PODATEK2 + (wyn - PROG2) * PODATEK3;

	printf("Zarobisz %f zl.\n", wyn);

	return 0;
}