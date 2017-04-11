#include <stdio.h>

void wysw1(const char * lancuch);

int main(void) {

	return 0;
}

void wysw1(const char * lancuch) {
	while (*lancuch != '\0')
		putchar(*lancuch++);
}