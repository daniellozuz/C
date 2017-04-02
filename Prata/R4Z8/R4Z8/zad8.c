#include <stdio.h>

#define MTOKM 1.609
#define GTOL 3.785

int main(void) {
	float mile, galony;

	printf("Podaj liczbe przebytych mil.\n");
	scanf_s("%f", &mile);
	printf("Podaj liczbe zuzytych galonow paliwa.\n");
	scanf_s("%f", &galony);

	printf("Wskaznik mpg: %.1f\n", mile / galony);
	printf("Wskaznik l/100km: %.1f\n", 100 * (galony * GTOL) / (mile * MTOKM));

	return 0;
}