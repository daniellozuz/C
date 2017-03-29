#include <stdio.h>

void pokaz1();
void pokaz2();

int main(void) {
	pokaz1();
	pokaz1();
	pokaz2();

	return 0;
}

void pokaz1(void) {
	printf("Panie Janie!\n");
}

void pokaz2(void) {
	printf("Rano wstan!\n");
}