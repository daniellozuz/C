#include <stdio.h>

int main(void) {
	const float INWESTYCJA = 1000000;
	const float OPROCENTOWANIE = 0.08;
	float jim = INWESTYCJA;
	int rok = 0;

	printf("Rok:     Majatek:\n");

	while (jim > 0) {
		jim -= 100000;
		jim += jim * OPROCENTOWANIE;
		rok++;
		printf("%4d %12.2f\n", rok, jim);
	}

	printf("Jim zbankrutowal po %d latach\n", rok);

	return 0;
}