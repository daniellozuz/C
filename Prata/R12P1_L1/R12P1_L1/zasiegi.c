#include <stdio.h>

int main(void) {
	int x = 30;

	printf("x w zewnetrznym bloku: %d spod adresu %p\n", x, &x);
	
	{
		int x = 77;
		printf("x w wewnetrznym bloku: %d spod adresu %p\n", x, &x);
	}

	printf("x w zewnetrznym bloku: %d spod adresu %p\n", x, &x);

	while (x++ < 33) {
		int x = 100;
		x++;
		printf("x w petli while: %d spod adresu %p\n", x, &x);
	}

	printf("x w zewnetrznym bloku: %d spod adresu %p\n", x, &x);

	return 0;
}