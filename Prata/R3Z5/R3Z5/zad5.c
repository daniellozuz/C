#include <stdio.h>

int main(void) {
	int wiek;
	int przelicznik = 3.156e7;
	long long wynik;

	printf("Podaj swoj wiek w latach:\n");
	scanf_s("%d", &wiek);
	wynik = (long long) wiek * przelicznik;
	printf("Twoj wiek w latach: %d, a w sekundach: %lld", wiek, wynik);

	return 0;
}