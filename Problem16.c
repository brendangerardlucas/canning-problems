#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//This program finds the sin value of a double entered in the command line as argv[1]
int main(int argc, char *argv[])
{
	double i = strtod(argv[1], NULL);
	double j = sin(i);
	printf("sin(%f) = %f\n", i, j);
}
