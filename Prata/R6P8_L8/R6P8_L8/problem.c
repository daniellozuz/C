#include <stdio.h>

int main(void) {
	long num;
	long suma = 0L;
	int stan;

	printf("Podaj liczbe calkowita do zsumowania (albo q, aby zakonczyc program).\n");
	
	stan = scanf_s("%ld", &num);
	while (stan = 1) {
		suma = suma + num;
		printf("Podaj nastepna liczbe calkowita (albo q, aby zakonczyc program)\n");
		stan = scanf_s("%ld", &num);
	}
	printf("Suma podanych liczb wynosi %ld.\n", suma);

	return 0;
}