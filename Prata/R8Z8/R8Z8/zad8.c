#include <stdio.h>
#include <ctype.h>

void menu(void);
int pobierz_wybor(void);
void dodawanie(void);
void odejmowanie(void);
void mnozenie(void);
void dzielenie(void);
float przyjmij_liczbe(int);

int main(void) {
	int ch;
	
	menu();

	while ((ch = pobierz_wybor()) != 'k'){
		printf("Pobrano %c\n", ch);

		switch (ch) {
		case 'a':
			dodawanie();
			break;
		case 'b':
			odejmowanie();
			break;
		case 'c':
			mnozenie();
			break;
		case 'd':
			dzielenie();
			break;
		default:
			printf("Error!\n");
			break;
		}

		menu();
	}

	return 0;
}

void menu(void) {
	printf("Wybierz jedno z dzialan.\n");
	printf("a. dodawanie      b. odejmowanie\n");
	printf("c. mnozenie       d. dzielenie\n");
	printf("k. koniec\n");
}

int pobierz_wybor(void) {
	int ch = pobierz_pierwszy();

	while ((ch < 'a' || ch > 'd') && ch != 'k') {
		printf("Niepoprawny wybor.\n");
		menu();
		
		ch = pobierz_pierwszy();
	}
		
	return ch;
}

int pobierz_pierwszy() {
	int ch;

	while (!isalpha(ch = getchar()))
		continue;

	while (getchar() != '\n')
		continue;

	return ch;
}

void dodawanie(void) {
	float a, b;

	a = przyjmij_liczbe(1);
	b = przyjmij_liczbe(2);

	printf("%.1f + %.1f = %.1f\n", a, b, a + b);
}

void odejmowanie(void) {
	float a, b;

	a = przyjmij_liczbe(1);
	b = przyjmij_liczbe(2);

	printf("%.1f - %.1f = %.1f\n", a, b, a - b);
}

void mnozenie(void) {
	float a, b;

	a = przyjmij_liczbe(1);
	b = przyjmij_liczbe(2);

	printf("%.1f * %.1f = %.1f\n", a, b, a * b);
}

void dzielenie(void) {
	float a, b;

	a = przyjmij_liczbe(1);

	while ((b = przyjmij_liczbe(2)) == 0.0) {
		printf("Podaj inna liczbe niz 0: \n");
	}

	printf("%.1f / %.1f = %.1f\n", a, b, a / b);
}

float przyjmij_liczbe(int nr) {
	float liczba;
	int ch;

	if (nr == 1)
		printf("Podaj pierwsza liczbe: ");
	else
		printf("Podaj druga liczbe: ");

	while (scanf_s("%f", &liczba) != 1) {
		while ((ch = getchar()) != '\n')
			putchar(ch);

		printf(" nie jest liczba.\nPodaj liczbe: ");
	}

	return liczba;
}