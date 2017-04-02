#include <stdio.h>

int main(void) {
	float przel = 2.54;
	float cent;
	float cale;

	printf("Podaj wzrost w centymetrach:\n");
	scanf_s("%f", &cent);
	printf("Masz %.2f cali wzrostu\n", cent / przel);

	printf("Podaj wzrost w calach:\n");
	scanf_s("%f", &cale);
	printf("Masz %.2f centymetrow wzrostu\n", cale * przel);

	return 0;
}