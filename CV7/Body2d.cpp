#include "Body2d.h"
#include <math.h>
#include <limits.h>
#include <stdio.h>


int indexNejblizsi(int velikost, int (*poleBodu)[2], int referencniX, int
	referencniY) {

	int index;
	int minVzdalenost = INT_MAX;
	int vysledek = -1;
	for (index = 0; index < velikost; index++) {
		// vypocitej vzdalenost jednotlivych souradnic
		int dx = poleBodu[index][0] - referencniX; //x[n] - x_ref
		int dy = poleBodu[index][1] - referencniY; //y[n] - y_ref
		int aktVzdalenost = dx * dx + dy * dy;


		// pokus je akt vzdalenost mensi nez min, zapis hodnotu a index
		if (minVzdalenost > aktVzdalenost) 
		{
			minVzdalenost = aktVzdalenost;
			vysledek = index;
		}

	}

	return vysledek;
}
double prumernaVzdalenost(int velikost, int (*poleBodu)[2], int referencniX, int
	referencniY) {	int index;
	double suma=0;
	for (index = 0; index < velikost; index++) {
		// vypocitej vzdalenost jednotlivych souradnic
		int dx = poleBodu[index][0] - referencniX; //x[n] - x_ref
		int dy = poleBodu[index][1] - referencniY; //y[n] - y_ref
		suma += sqrt((double)(dx * dx + dy * dy));

	}
	return suma/velikost;}void bodyVeVzdalenosti(int velikost, int poleBodu[][2], int referencniX, int
	referencniY, double r) {
	for (int index = 0; index < velikost; index++) {
		int dx = poleBodu[index][0] - referencniX;
		int dy = poleBodu[index][0] - referencniY;
		double vzdalenost = sqrt((double)(dx * dx + dy * dy));

		if (vzdalenost < r) {
			printf("Bod ve vzdalenosti %.2lf: (%d, %d)\n", vzdalenost, poleBodu[index][0], poleBodu[index][1]);
		}
	}
}