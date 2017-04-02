#include <stdio.h>

#define SEK_NA_MIN 60

int main(void) {
	int sec, min, left;

	printf("Konwertuje sekundy na minuty i sekundy!\n");
	printf("Podaj liczbe sekund (<=0 to koniec):\n");
	scanf_s("%d", &sec);

	while (sec > 0) {
		min = sec / SEK_NA_MIN;
		left = sec % SEK_NA_MIN;
		printf("%d sekund to %d minut, %d sekund.\n", sec, min, left);
		printf("Podaj kolejna wartosc (<=0 to koniec):\n");
		scanf_s("%d", &sec);
	}

	printf("Koniec!\n");

	return 0;
}