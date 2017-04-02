#include <stdio.h>

int main(void) {
	float aboat = 32000.0;
	double abet = 2.14e9;
	long double dip = 5.32e-5;

	printf("%f mozna przedstawic jako %e\n", aboat, aboat);
	printf("albo jako %a w szestnastkowym zapisie potegowym\n", aboat);
	
	printf("%f mozna przedstawic jako %e\n", abet, abet);
	printf("%f mozna przedstawic jako %e\n", dip, dip);

	return 0;
}