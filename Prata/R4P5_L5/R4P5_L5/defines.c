#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void) {
	printf("Niektore granice liczbowe dla tego systemu:\n");
	printf("Najwiekszy int: %d\n", INT_MAX);
	printf("Najmniejszy long long: %lld\n", LLONG_MIN);
	printf("Jeden bajt = %d bitow (w tym systemie)\n", CHAR_BIT);
	printf("Najwiekszy double: %e\n", DBL_MAX);
	printf("Najmniejszy normalny float: %e\n", FLT_MIN);
	printf("Float precyzja = %d cyfr\n", FLT_DIG);
	printf("Float epsilon = %e\n", FLT_EPSILON);
	printf("Double precyzja = %d cyfr\n", DBL_DIG);
	printf("Double epsilon = %e\n", DBL_EPSILON);

	return 0;
}