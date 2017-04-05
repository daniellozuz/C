#include <stdio.h>

void podnies(float fl);

int main(void) {
	float liczba;

	printf("Podaj liczbe zmiennoprzecinkowa, ktora chcesz podniesc do 3 potegi: ");
	scanf_s("%f", &liczba);

	podnies(liczba);

	return 0;
}

void podnies(float fl) {
	printf("%f do potegi 3 wynosi %f\n", fl, fl * fl * fl);
}