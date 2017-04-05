#include <stdio.h>

int main(void) {
	int n = 5;

	while (n < 7) {
		printf("n = %d\n", n);
		n++;
		printf("Teraz n = %d\n", n);
	}
	printf("Petla zakonczona.\n");

	return 0;
}