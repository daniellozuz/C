#include <stdio.h>

void zamiana(int u, int v);

int main(void) {
	int x = 5;
	int y = 10;

	printf("Poczatkowo x = %2d, a y = %2d.\n", x, y);

	zamiana(x, y);

	printf("A teraz    x = %2d, a y = %2d.\n", x, y);

	return 0;
}

void zamiana(int u, int v) {
	int temp;

	printf("Poczatkowo u = %2d, a v = %2d.\n", u, v);

	temp = u;
	u = v;
	v = temp;

	printf("A teraz    u = %2d, a v = %2d.\n", u, v);
}