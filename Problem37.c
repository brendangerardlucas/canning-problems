#include <stdio.h>
//This program tests whether scanned numbers are perfect
int IsPerfect(int num) //returns 1 for perfect, returns 0 for not perfect
{
	int sum = 0;
	for(int i = 1; i < num; i++)
	{
		if(num % i == 0)
		{
			sum = sum + i;
		}
	}
	if(sum == num)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void PrintPerfect(int count, int scannedint) //outputs whether number is perfect
{
	if ((count != 0) && (IsPerfect(scannedint) == 1))
	{
		printf("%d is perfect.\n", scannedint);
	}
	else if ((count != 0) && (IsPerfect(scannedint) == 0))
	{
		printf("%d is not perfect.\n", scannedint);
	}
}

int main(void)
{
	printf("A perfect number is the sum of its proper divisors.\n");
	int scannedint;
	int count = 0;
	do {
		PrintPerfect(count, scannedint);
		count++;
		printf("Number to test perfect: ");
	} while(scanf("%d", &scannedint) == 1);
	printf("\nNumbers tested: %d\n", count - 1);
	printf("All the perfect numbers from 1 to 100,000:\n");
	for(int i = 0; i < 100000; i++) //print perfects through 100k
	{
		if(IsPerfect(i + 1))
		{
			printf("%d\n", i + 1);
		}
	}
	return 0;
}
