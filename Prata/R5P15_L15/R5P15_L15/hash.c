#include <stdio.h>

void hash(int n);

int main(void) {
	int razy = 5;
	char ch = '!';
	float f = 6.0;

	hash(razy);
	hash(ch);
	hash(f);

	return 0;
}

void hash(int n) {
	while (n-- > 0)
		printf("#");
	printf("\n");
}