#include <stdio.h>
//This program finds the greatest common divisor of a pair of integers by brute force
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
int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("No argv[1].");
		return 0;
	}
	FILE* argvf = fopen(argv[1], "r");
	int m, n, small, gcd; //two numbers, their minimum, their greatest common divisor
	while(fscanf(argvf, "%d", &m) == 1)
	{
		fscanf(argvf, "%d", &n);
		small = min(m, n);
		for(int i = 1; i < small + 1; i++)
		{
			if( m % i == 0 && n % i == 0)
			{
				gcd = i;
			}
		}
		printf("The greatest common divisor of %d and %d is: %d\n", m, n, gcd);
	}
	fclose(argvf);
}
