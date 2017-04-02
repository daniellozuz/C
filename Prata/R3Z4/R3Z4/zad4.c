#include <stdio.h>

int main(void) {
	float x;
	
	printf("Podaj liczbe zmiennoprzecinkowa:\n");
	scanf_s("%f", &x);
	printf("Podana liczba to %f lub %e lub %a\n", x, x, x);

	return 0;
}