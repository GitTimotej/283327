// Body2d.cpp : Defines the entry point for the application.
//

#include "Body.h"
#include "Body2d.h"
#include <stdio.h>
#define POCET_BODU 10
int main()
	{
	int body[POCET_BODU][2] = { 5, 10,
	-14, 2,
	45, 4,
	-9, 8,
	58, -3,
	47, 5,
	-18, -86,
	75, 7,
	-25, 51,
	17, 98 };

	int x, y, i_nejblizsi;

	printf("Zadejte X a Y souradnice ref. bodu oddelene carkou:\n");
	scanf_s("%d, %d", &x, &y);

	i_nejblizsi = indexNejblizsi(POCET_BODU, body, x, y);
	printf("\n Nejblizsi bod: (%d, %d) \n", body[i_nejblizsi][0], body[i_nejblizsi][1]);

	printf("\n Prumerna vzdalenost od ref. bodu: %lf \n \n", prumernaVzdalenost(POCET_BODU, body, x, y));

	double r;
	printf("Zadejte vzdalenost r: ");
	scanf("%lf", &r);
	printf("\nBody ve vzdalenosti %.2lf od referencniho bodu: \n", r);
	bodyVeVzdalenosti(POCET_BODU, body, x, y, r);
	return 0;
}