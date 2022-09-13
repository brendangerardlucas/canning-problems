#include <stdio.h>
//This program finds the greatest common divisor of a pair of integers by euclid's algorithm
int min( int a, int b) //evaluate the minimum
{
	if(a < b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
int max( int a, int b) //evaluate the maximum
{
	if(a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("No argv[1].");
		return 0;
	}
	FILE* argvf = fopen(argv[1], "r");
	int m, n, small, big, gcd; //two numbers, their minimum, their maximum, their greatest common divisor
	while(fscanf(argvf, "%d", &m) == 1)
	{
		fscanf(argvf, "%d", &n);
		small = min(m, n);
		big = max(m, n);
		gcd = small;
		while(big % small != 0) //euclid's algorithm
		{
			gcd = big % small;
			big = small;
			small = gcd;
		}
		printf("The greatest common divisor of %d and %d is: %d\n", m, n, gcd);
	}
	fclose(argvf);
}
