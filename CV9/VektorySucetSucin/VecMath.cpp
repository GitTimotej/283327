#include "VecMath.h"

struct vector3d operace(struct vector3d u, struct vector3d v, enum
	typOperace typ) {
	struct vector3d vysledek;

	vysledek.x = 0;
	vysledek.y = 0;
	vysledek.z = 0;

	switch (typ) {

	case soucet:
		vysledek.x = u.x + v.x;
		vysledek.y = u.y + v.y;
		vysledek.z = u.z + v.z;
	break;
	case skalarniSoucin:
		vysledek.x = u.x * v.x + u.y * v.y + u.z * v.z;
	break;
	case vektorovySoucin:
		vysledek.x = u.y * v.z - u.z * v.y;
		vysledek.y = u.z * v.x - u.x * v.z;
		vysledek.z = u.x * v.y - u.y * v.x;
	break;
	}
	return vysledek;
}

int vect_cmp(struct vector3d u, struct vector3d v) {
	double velikost_1 = sqrt(u.x * u.x + u.y * u.y + u.z * u.z);
	double velikost_2 = sqrt(v.x * v.x + v.y * v.y + v.z * v.z);

	if (velikost_1 > velikost_2) {
		return 1;
	}
	if (velikost_1 < velikost_2) {
		return -1;
	}
	if (velikost_1 == velikost_2) {
		return 0;
	}
}


void tisk(struct vector3d w) {

	printf("w = (%.3lf, %.3lf, %.3lf\n", w.x, w.y, w.z);
	printf("|w| = %.3lf", sqrt(w.x * w.x + w.y * w.y + w.z * w.z));

}