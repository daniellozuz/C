#include <stdio.h>

const int S_W_M = 60;
const int S_W_H = 3600;

int main(void) {
	double dyst;
	double predkosc;
	int min, sek;
	int czas;
	double czas_km;
	int min_km, sek_km;

	printf("Ten program zamienia Twoj czas w biegu na dowolny dystans\n");
	printf("na czas przebiegniecia 1 km oraz na srednia predkosc w km/h\n");
	printf("Wpisz pokonana odleglosc w kilometrach.\n");
	scanf_s("%lf", &dyst);
	printf("Wpisz swoj czas w minutach i sekundach.\n");
	printf("Zacznij od podania liczby minut.\n");
	scanf_s("%d", &min);
	printf("Teraz podaj liczbe sekund.\n");
	scanf_s("%d", &sek);

	czas = S_W_M * min + sek;
	predkosc = dyst / czas * S_W_H;

	czas_km = (double)czas / dyst;
	min_km = (int)czas_km / S_W_M;
	sek_km = (int)czas_km % S_W_M;

	printf("Przebiegles %1.2f km w czasie %d minut %d sekund.\n", dyst, min, sek);
	printf("Odpowiada to przebiegnieciu 1 km w czasie %d minut %d sekund.\n", min_km, sek_km);
	printf("Twoja srednia predkosc to %1.2f km/h.\n", predkosc);

	return 0;
}