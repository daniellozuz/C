#include <stdio.h>

#define DL 20

struct daneos {
	char imie[DL];
	char nazw[DL];
};

struct facet {
	struct daneos person;
	char ulub_jedz[DL];
	char zawod[DL];
	float dochody;
};

int main(void) {
	struct facet gosc[2] = {
		{ { "Chip", "Hyperlink" },
		"Talerz chipsow",
		"trener osobisty",
		36827.00 
		},
		{ { "Norbert", "Brzuchacz" },
		"mus lososiowy",
		"redaktor brukowca",
		148500.00
		}
	};

	struct facet * on;

	printf("Adres    #1: %p #2: %p\n", &gosc[0], &gosc[1]);
	
	on = &gosc[0];
	
	printf("Wskaznik #1: %p #2: %p\n\n", on, on + 1);
	printf("on->dochody     ma wartosc %.2f $\n", on->dochody);
	printf("(*on).dochody   ma wartosc %.2f $\n", (*on).dochody);
	
	on++;
	
	printf("on->ulub_jedz   ma wartosc %s\n", on->ulub_jedz);
	printf("on->person.nazw ma wartosc %s\n\n", on->person.nazw);

	return 0;
}