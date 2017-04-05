#include <stdio.h>

#define STAWKA1 0.2401
#define STAWKA2 0.2881
#define STAWKA3 0.3457
#define STAWKA4 0.3877

#define PROG1 360.0
#define PROG2 468.0
#define PROG3 720.0

#define PODSTAWA1 (STAWKA1 * PROG1)
#define PODSTAWA2 (PODSTAWA1 + (STAWKA2 * (PROG2 - PROG1)))
#define PODSTAWA3 (PODSTAWA1 + PODSTAWA2 + (STAWKA3 * (PROG3 - PROG2)))

int main(void) {
	double kwh, oplata;

	printf("Podaj liczbe zuzytych kWh.\n");
	scanf_s("%lf", &kwh);

	if (kwh <= PROG1)
		oplata = STAWKA1 * kwh;
	else if (kwh <= PROG2)
		oplata = PODSTAWA1 + (STAWKA2 * (kwh - PROG1));
	else if (kwh <= PROG3)
		oplata = PODSTAWA2 + (STAWKA3 * (kwh - PROG2));
	else
		oplata = PODSTAWA3 + (STAWKA4 * (kwh - PROG3));

	printf("Oplata za %.1f kWh wynosi %1.2f zl.\n", kwh, oplata);

	return 0;
}