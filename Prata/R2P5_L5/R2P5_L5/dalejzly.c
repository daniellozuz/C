#include <stdio.h>

int main(void) {
	int n, n2, n3;

	n = 5;
	n2 = n * n;
	n3 = n2 * n2;
	printf("n = %d, n do kwadratu = %d, n do szescianu = %d (zle)\n", n, n2, n3);

	return 0;
}