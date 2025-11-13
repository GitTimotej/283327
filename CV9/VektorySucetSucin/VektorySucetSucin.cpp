#include "VektorySucetSucin.h"
#include "VecMath.h"
using namespace std;

int main()
{
    struct vector3d vysledek, u, v;
    enum typOperace op;
    int cmp_result;

    printf("Zadejte souradnice vektoru u (oddelene carou): ");
    scanf_s("%lf,%lf,%lf", &u.x, &u.y, &u.z);

    printf("Zadejte souradnice vektoru v (oddelene carou): ");
    scanf_s("%lf,%lf,%lf", &v.x, &v.y, &v.z);

    printf("Zadejte typ operace\n  1 - soucet\n  2 - skalarniSoucin\n  3 - vektorovySoucin\n ");
    scanf_s("%d", &op);

    vysledek = operace(u, v, op);
    tisk(vysledek);

    cmp_result = vect_cmp(u, v);
    printf("\nPorovnani: %d\n", cmp_result);

	return 0;
}
