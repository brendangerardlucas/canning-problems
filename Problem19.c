#include <stdio.h>
#include <math.h>
//This program computes the area of a rectangle
int main(void)
{
	double l;
	double h;
	printf("Rectangle length:");
	scanf("%lf", &l);
	printf("Rectangle height:");
	scanf("%lf", &h);
	printf("Rectangle area: %f\n", l*h);
}
