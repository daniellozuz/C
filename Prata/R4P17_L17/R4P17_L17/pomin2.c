#include <stdio.h>

int main(void) {
	int n;

	printf("Podaj, prosze, trzy liczby calkowite:\n");
	scanf_s("%*d %*d %d", &n);
	printf("Ostatnia podana liczba to %d\n", n);

	return 0;
}