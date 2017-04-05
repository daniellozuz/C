#include <stdio.h>

int main(void) {
	int mniejsza, wieksza;
	int i;
	int suma;

	printf("Podaj dolna i gorna granice przedzialu liczb calkowitych:");
	
	while (scanf_s("%d %d", &mniejsza, &wieksza) == 2 && wieksza > mniejsza) {
		printf("Suma kwadratow od %d do %d wynosi ", mniejsza * mniejsza, wieksza * wieksza);
		suma = 0;
		for (i = mniejsza; i <= wieksza; i++)
			suma = suma + i * i;
		printf("%d\nPodaj nastepny przedzial:", suma);
	}

	return 0;
}