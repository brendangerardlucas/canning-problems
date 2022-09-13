#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//prints 10 random integers between -19 and 19.

int myrand(void)
{
	int output = rand() % 39 - 19;
	return output;
}

int main(void)
{
	srand(time(NULL));
	int n;
	for(int i = 0; i < 10; i++)
	{
		n = myrand();
		printf("%d\n", n);
	}
}

