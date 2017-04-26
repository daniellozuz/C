#define DL 40
#define ILOSC 20

struct daneos {
	char imie[DL];
	char nazwisko[DL];
};

struct student {
	struct daneos dane;
	float oceny[ILOSC];
	float srednia;
};