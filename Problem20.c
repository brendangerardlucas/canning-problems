#include <stdio.h>
#include <math.h>
//This program determines the area of a circle from the radius
int main(void)
{
	double r;
	printf("Circle radius: ");
	scanf("%lf", &r);
	printf("Circle area: %f\n", M_PI * pow(r, 2));
}
