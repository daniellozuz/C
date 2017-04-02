#include <stdio.h>

int main(void) {
	int over_int = 2147483647;
	float over_float = 2e38;
	float under_float = -1.234567e-37;

	printf("Int = %d. Int + 1 = %d\n", over_int, over_int + 1);
	printf("Float = %e. Float * 10 = %e\n", over_float, over_float * 10.0f);
	printf("Float = %e. Float / 1 000 000 000 = %e\n", under_float, under_float / 1e9f);

	return 0;
}