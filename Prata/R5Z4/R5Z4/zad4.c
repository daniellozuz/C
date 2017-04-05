#include <stdio.h>

#define FTTOCM 30.48
#define INTOCM 2.54

int main(void) {
	float cm;
	int stopy;
	float cale;

	printf("Podaj wzrost w centymetrach (<=0 - koniec): ");
	scanf_s("%f", &cm);

	while (cm > 0) {
		stopy = cm / FTTOCM;
		cale = (cm - stopy * FTTOCM) / INTOCM;

		printf("\n%.1f cm = %d stop, %.1f cali\n", cm, stopy, cale);

		printf("Podaj wzrost w centymetrach (<=0 - koniec): "); 
		scanf_s("%f", &cm);
	}

	return 0;
}