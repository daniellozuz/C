#include <stdio.h>

int main(void) {
	int n = 0;
	size_t intsize;

	intsize = sizeof(int);
	printf("n = %d, ma %d bajty; wszystkie liczby calkowite maja %d bajty.\n", n, sizeof n, intsize);

	return 0;
}