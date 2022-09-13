#include <stdio.h>
#include <stdlib.h>
//This program prints the sum of entries of an array entered through command line by allocating memory
int main(void)
{
	int n;
	printf("How many entries?: ");
	scanf("%d", &n);
	int *a = malloc(n * sizeof(int));
	int sum = 0;
	for(int i = 0; i < n; i++)
	{
		printf("Array index %d:", i + 1);
		scanf("%d", &a[i]);
		sum = sum + a[i];
	}
	printf("Sum: %d\n", sum);
}
