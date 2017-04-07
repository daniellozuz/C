#include <stdio.h>

double sr_harm(double x, double y);

int main(void) {
	double x = 6.7;
	double y = 2.4;

	printf("Srednia harmoniczna liczb %.2f i %.2f wynosi %.2f.\n", x, y, sr_harm(x, y));

	return 0;
}

double sr_harm(double x, double y) {
	return 1.0 / (((1.0 / x) + (1.0 / y)) / 2.0);
}