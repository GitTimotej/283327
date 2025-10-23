// PrepisTextu.cpp : Defines the entry point for the application.
//

#include "PrepisTextu.h"
#include <ctype.h>

using namespace std;

int pocetPismen(char* text) {
	int pocet = 0;
	char* znak;
	for (znak = text; *znak != 0; ++znak) {
		if (isalpha(*znak)) {
			pocet++;
		}
	}

	return pocet;
}
int pocetCisel(char* text) {
	int pocet = 0;
	char* znak;
	for (znak = text; *znak != 0; ++znak) {
		if (isdigit(*znak)) {
			pocet++;
		}
	}

	return pocet;
}
int pocetSlov(char* text) {
	int pocet = 0;
	int prechZnak = 0;
	char* znak;
	for (znak = text; *znak != 0; ++znak) {
		if (isspace(*znak) && !isspace(prechZnak)) {
			pocet++;
		}
		prechZnak = *znak;
	}
	
	return pocet;
}
int main()
{
	char text[] = "Toto jsou 2 vzorove vety, ktere budou zpracovavany Vasemi       funkcemi. Auto Hyundai ix35 ma pres 120 konskych sil.";
	printf("Pocet pismen v textu je: %d\n", pocetPismen(text));
	printf("Pocet cisel v textu je: %d\n", pocetCisel(text));
	printf("Pocet slov v textu je: %d\n", pocetSlov(text));
	return 0;
}
