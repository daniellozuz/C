#include <stdio.h>

int imax(int, int);

int main(void) {
	printf("Wieksza liczba z %d i %d to %d.\n", 3, 5, imax(3, 5));

	printf("Wieksza liczba z %d i %d to %d.\n", 3, 5, imax(3.0, 5.0));

	return 0;
}

int imax(n, m)
int n, m;
{
	return (n > m ? n : m);
}