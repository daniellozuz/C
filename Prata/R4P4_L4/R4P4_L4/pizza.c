#include <stdio.h>

#define PI 3.14159

int main(void) {
	float powierzchnia, obwod, promien;
	printf("Ile wynosi promien Twojej pizzy?\n");
	scanf_s("%f", &promien);
	powierzchnia = PI * promien * promien;
	obwod = 2 * PI * promien;
	printf("Podstawowe parametry Twojej pizzy to:\n");
	printf("obwod = %1.2f, powierzchnia = %1.2f\n", obwod, powierzchnia);

	return 0;
}