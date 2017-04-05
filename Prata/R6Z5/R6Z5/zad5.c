#include <stdio.h>

int main(void) {
	int i, j;
	char znak;

	printf("Podaj do jakiego znaku chcesz wygenerowac piramide.\n");
	scanf_s("%c", &znak);

	for (i = 'A'; i <= znak; i++) {
		for (j = i + 1; j <= znak ; j++)
			printf(" ");

		for (j = 'A'; j <= i; j++)
			printf("%c", j);
		
		for (j = i - 1; j >= 'A'; j--)
			printf("%c", j);

		printf("\n");
	}

	return 0;
}