// Vektory.cpp : Defines the entry point for the application.
//

#include "Vektory.h"
#include "math.h"

using namespace std;
void soucet(double a[3], double b[3], double c[3]) {
	c[0] = a[0] + b[0];
	c[1] = a[1] + b[1];
	c[2] = a[2] + b[2];
}
double velikost(double a[3]) {
	return sqrt(a[0]*a[0]+a[1]*a[1]+a[2]*a[2]);
}
double skalarniSoucin(double a[3], double b[3]) {
	return a[0] * b[0] + a[1] * b[1] + a[2] * b[2];
}
//double vektorovySoucin(double a[3], double b[3]) { 
	//return (a[1] * b[2]) - (a[2] * b[1]), (a[2] * b[0]) - (a[0] * b[1]), (a[0] * b[1]) - (a[1] * b[0]);
void vektorovySoucin(double a[3], double b[3], double c[3]) {
	c[0] = (a[1] * b[2]) - (a[2] * b[1]);
	c[1] = (a[2] * b[0]) - (a[0] * b[2]);
	c[2] = (a[0] * b[1]) - (a[1] * b[0]);
	}
int main()
{
	double a[3], b[3], c[3];
	printf("Zadajte  suradnice vektoru A oddelene ciarkami");
	scanf_s("%lf,%lf,%lf", &a[0], &a[1], &a[2]);
	printf("Zadajte  suradnice vektoru B oddelene ciarkami");
	scanf_s("%lf,%lf,%lf", &b[0], &b[1], &b[2]);
	printf("\n");
	soucet(a, b, c);
	printf("Vysledok suctu vektoru A a B je: (%lf,%lf,%lf)\n", c[0], c[1], c[2]);
	printf("Velkost vektoru A je: %lf\n",velikost(a));
	printf("Skalarni sucin vektorov A a B je: %lf\n", skalarniSoucin(a, b));
	vektorovySoucin(a, b, c);
	printf("Vektorovy sucin vektorov A a B je: (%lf,%lf,%lf)\n", c[0],c[1],c[2]);
	return 0;
}
