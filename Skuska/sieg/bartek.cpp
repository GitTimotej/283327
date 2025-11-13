#include "bartek.h"

int prunik(double zacatek1, double konec1, double zacatek2, double konec2,
    double* vysl_zacatek, double* vysl_konec)
{
    // za predpokladu zacatek1 <= konec1, zacatek2 <= konec2 a zacatek1 < zacatek2
    // konec1 > zacatek2 je prunik

    if (konec1 > zacatek2) {
        if (zacatek2 < zacatek1) {
            *vysl_zacatek = zacatek1;
        }
        else {
            *vysl_zacatek = zacatek2;
        }
       
        *vysl_konec = konec1 > konec2 ? konec2 : konec1;

        /*
        if (konec1 > konec2) {
            *vysl_konec = konec2;
        }
        else {
            *vysl_konec = konec1;
        }*/
        return 1;
    }

    return 0;
}
