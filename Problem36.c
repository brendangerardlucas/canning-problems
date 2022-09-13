#include <stdio.h>
//This program tests whether scanned numbers are prime
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

void PrintPrime(int count, int scannedint) //outputs whether number is prime
{
	if ((count != 0) && (IsPrime(scannedint) == 1))
	{
		printf("%d is prime.\n", scannedint);
	}
	else if ((count != 0) && (IsPrime(scannedint) == 0))
	{
		printf("%d is not prime.\n", scannedint);
	}
}

int main(void)
{
	int scannedint;
	int count = 0;
	do {
		PrintPrime(count, scannedint);
		count++;
		printf("Number to test prime: ");
	} while(scanf("%d", &scannedint) == 1);
	printf("\nNumbers tested: %d\n", count - 1);
}
