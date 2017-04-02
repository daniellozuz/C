#include <stdio.h>
#include <float.h>

int main(void) {
	double dabl = 1.0 / 3.0;
	float flout = 1.0 / 3.0;

	printf("Double: %20.4f %20.12f %20.16f\n", dabl, dabl, dabl);
	printf("Float:  %20.4f %20.12f %20.16f\n", flout, flout, flout);

	printf("Wartosc FLT_DIG to: %d\n", FLT_DIG);
	printf("Wartosc DBL_DIG to: %d\n", DBL_DIG);

	return 0;
}