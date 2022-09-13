#include <stdio.h>
#include <math.h>
//This program prints the square root of a scanned double using %lf and math.h
//compile with clang Problem15.c -lm
int main(void)
{
	double i = 0;
	printf("Find sqrt of: ");
	scanf("%lf", &i);
	double j = sqrt(i);
	printf("Sqrt(%lf) = %lf \n", i, j);
}
