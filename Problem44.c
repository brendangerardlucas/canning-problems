#include <stdio.h>
#include <stdlib.h>
//This program prints 10 random integers between -19 and 19.
//Problem44-1.c uses srand(time(NULL)); for true randomness

int myrand(void)
{
	int output = rand() % 39 - 19;
	return output;
}

int main(void)
{
	int n;
	for(int i = 0; i < 10; i++)
	{
		n = myrand();
		printf("%d\n", n);
	}
}

