// sieg.cpp : Defines the entry point for the application.
//

#include "sieg.h"
#include "bartek.h"
#include "bartek.cpp"


int main()
{
	int vysl;
	double zacatek1, konec1, zacatek2, konec2;
	double z_vysl, k_vysl;

	printf("Zadejte prvni interval (cisla oddelena mezerou): \n");
	scanf_s("%lf %lf", &zacatek1, &konec1);

	printf("Zadejte druhy interval (cisla oddelena mezerou): \n");
	scanf_s("%lf %lf", &zacatek2, &konec2);

	vysl = prunik(zacatek1, konec1, zacatek2, konec2, &z_vysl, &k_vysl);

	if (vysl) {
		printf("\nPrunik intervalu je(% lf, % lf)\n", z_vysl, k_vysl);
	}
	else {
		printf("\nIntervaly nemaji prunik");
	}
	return 0;
}
