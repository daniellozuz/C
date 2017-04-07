#include <stdio.h>

long silnia(int n);
long rsilnia(int n);

int main(void) {
	int num;

	printf("Ten program liczy silnie.\nPodaj liczbe z przedzialu 0-12 (k - koniec).\n");

	while (scanf_s("%d", &num) == 1) {
		if (num < 0)
			printf("Prosze nie podawac liczb ujemnych.\n");
		else if (num > 12)
			printf("Prosze podac wartosc mniejsza od 13.\n");
		else {
			printf("petla: %d silnia = %ld\n", num, silnia(num));
			printf("rekurencja: %d silnia = %ld\n", num, rsilnia(num));
		}

		printf("Podaj liczbe z przedzialu 0-12 (k - koniec).\n");
	}

	printf("Gotowe.\n");

	return 0;
}

long silnia(int n) {
	long wyn;
	
	for (wyn = 1; n > 1; n--)
		wyn *= n;

	return wyn;
}

long rsilnia(int n) {
	long wyn;

	if (n > 0)
		wyn = n * rsilnia(n - 1);
	else
		wyn = 1;

	return wyn;
}