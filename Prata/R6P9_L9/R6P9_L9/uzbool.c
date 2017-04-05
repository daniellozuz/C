#include <stdio.h>

int main(void) {
	long num;
	long suma = 0L;
	_Bool wej_jest_ok;

	printf("Wprowadz wartosci calkowite do zsumowania (k - koniec).\n");

	wej_jest_ok = (scanf_s("%ld", &num) == 1);
	while (wej_jest_ok) {
		suma = suma + num;
		printf("Podaj nastepna liczbe calkowita (k - koniec)\n");
		wej_jest_ok = (scanf_s("%ld", &num) == 1);
	}
	printf("Suma podanych liczb wynosi %ld.\n", suma);

	return 0;
}