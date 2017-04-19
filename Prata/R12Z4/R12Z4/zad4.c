#include <stdio.h>

unsigned int funkcja(void);

int main(void) {
	printf("Pierwsze wywolanie funkcji zwrocilo: %u\n", funkcja());
	printf("Drugie wywolanie funkcji zwrocilo: %u\n", funkcja());
	printf("Trzecie wywolanie funkcji zwrocilo: %u\n", funkcja());
	
	return 0;
}

unsigned int funkcja(void) {
	static unsigned int ilosc = 0;

	return ++ilosc;
}