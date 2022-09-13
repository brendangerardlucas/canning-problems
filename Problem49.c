#include <stdio.h>
//This program counts the 1s in the binary representation of integers in testdata49.txt
int ones(int n) //returns 1 odd, returns 0 even
{
		int onescount = 0;
		while (n != 0)
		{
			if( n % 2 != 0 ) //if odd
			{
				onescount++;
			}
			n = n >> 1;
		}
		return onescount;
}

int main (void)
{
	FILE* testdata49 = fopen("testdata49.txt", "r");
	int n;
	int onebits;
	printf("1s in bit representation of ints in testdata49.txt:\n");
	while(fscanf(testdata49, "%d", &n) == 1)
	{
		onebits = ones(n);
		printf("1s in %d: %d\n", n, onebits);
	}
	fclose(testdata49);
}
