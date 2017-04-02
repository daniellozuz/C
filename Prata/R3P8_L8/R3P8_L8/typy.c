#include <stdio.h>

int main(void) {
	printf("Typ int ma rozmiar %lu bajtow.\n", sizeof(int));
	printf("Typ char ma rozmiar %lu bajtow.\n", sizeof(char));
	printf("Typ short ma rozmiar %lu bajtow.\n", sizeof(short));
	printf("Typ float ma rozmiar %lu bajtow.\n", sizeof(float));
	printf("Typ double ma rozmiar %lu bajtow.\n", sizeof(double));
	printf("Typ long ma rozmiar %lu bajtow.\n", sizeof(long));
	printf("Typ long long ma rozmiar %lu bajtow.\n", sizeof(long long));
	printf("Typ long double ma rozmiar %lu bajtow.\n", sizeof(long double));
	return 0;
}