#include <stdio.h>

int main(void) {
	int urna[5] = { 100, 200, 300, 400, 500 };
	int * wsk1, * wsk2, * wsk3;

	wsk1 = urna;
	wsk2 = &urna[2];
	printf("wartosc wskaznika      wskazywana wartosc      adres wskaznika\n");
	printf("  wsk1 = %p             *wsk1 = %d     &wsk1 = %p\n", wsk1, *wsk1, &wsk1);

	wsk3 = wsk1 + 3;
	printf("\n\n\twsk3 = wsk1 + 3\n");
	printf("wsk1 + 3 = %p \t *(wsk1 + 3) = %d \t &wsk3 = %p\n", wsk1 + 3, *(wsk1 + 3), &wsk3);

	wsk1++;
	printf("\n\n\twsk1++\n");
	printf("wsk1 = %p \t *wsk1 = %d \t\t &wsk1 = %p\n", wsk1, *wsk1, &wsk1);

	wsk2--;
	printf("\n\n\twsk2--\n");
	printf("wsk2 = %p \t *wsk2 = %d \t\t &wsk2 = %p\n", wsk2, *wsk2, &wsk2);

	--wsk1;
	++wsk2;
	printf("\n\n\tWskazniki przywrocone do poczatkowych wartosci.\n");
	printf("wsk1 = %p \t wsk2 = %p\n", wsk1, wsk2);

	printf("\n\n\twsk2 - wsk1\n");
	printf("wsk2 = %p \t wsk1 = %p \t wsk2 - wsk1 = %d\n", wsk2, wsk1, wsk2 - wsk1);

	printf("\n\n\twsk3 - 2\n");
	printf("wsk3 = %p \t wsk3 - 2 = %p\n\n\n", wsk3, wsk3 - 2);

	return 0;
}