#include <stdio.h>

int main(void) {
	int n = 8;

	printf("Poczatkowo n = %d pod adresem %p\n", n, &n);

	for (int n = 1; n < 3; n++)
		printf("Petla 1: n = %d pod adresem %p\n", n, &n);

	printf("Po petli 1: n = %d pod adresem %p\n", n, &n);

	for (int n = 1; n < 3; n++) {
		printf("Petla 2 indeks n = %d pod adresem %p\n", n, &n);
		int n = 6;
		printf("Petla 2: n = %d pod adresem %p\n", n, &n);
		n++;
	}

	printf("Po petli 2: n = %d pod adresem %p\n", n, &n);

	return 0;
}