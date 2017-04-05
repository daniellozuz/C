#include <stdio.h>

int main(void) {
	int ilosc;
	float suma1 = 0;
	float suma2 = 0;
	int licznik = 0;
	int znak;
	int i;

	printf("Podaj ile wyrazow dwoch ciagow chcesz zsumowac.\n");
	scanf_s("%d", &ilosc);

	while (ilosc >= 0 && licznik < ilosc) {
		suma1 += 1.0 / (licznik + 2);
		
		znak = -1;
		for (i = 0; i <= (licznik % 2); i++)
			znak *= (-1);
		
		suma2 += znak * 1.0 / (licznik + 2);
		
		licznik++;
	}

	printf("%f %f\n", suma1, suma2);

	return 0;
}