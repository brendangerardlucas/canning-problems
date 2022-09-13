#include <stdio.h>
//This program prints all positive integers less than and relatively prime to 351 by the Euclidean gcd algorithm 
int min(int a, int b) //evaluate the minimum
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

int max(int a, int b) //evaluate the minimum
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

int gcd(int a, int b)
{
	int small, big, gcd; //two numbers, their minimum, their maximum, their greatest common divisor
	small = min(a, b);
	big = max(a, b);
	gcd = small;
	while(big % small != 0) //euclid's algorithm
	{
		gcd = big % small;
		big = small;
		small = gcd;
	}
	return gcd;
}

int main(void)
{
	printf("Less than and relatively prime to 351:\n");
	for(int i = 1; i < 351; i++)
	{
		if (gcd(i, 351) == 1)
		{
			printf("%d\n", i); 
		}
	}
}
