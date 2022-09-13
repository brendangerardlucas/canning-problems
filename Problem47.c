#include <stdio.h>
//This program prints all twin primes as rows up to 3000
int IsPrime(int num) //returns 1 for prime, returns 0 for not prime
{
	if(num < 2)
	{
		return 0;
	}
	for(int i = 2; i < num; i++)
	{
		if(num % i == 0)
		{
			return 0;
		}
	}
	return 1;
}

int main(void)
{
	printf("Twin primes:\n");
	for(int i = 3; i < 3000; i++)
	{
		if (IsPrime(i - 2) && IsPrime(i))
		{
			printf("%d %d\n", i - 2, i);
		}
	}
}
