#include <stdio.h>
//This program prints a number of asterisks scanned by scanf and a while loop
int main(void)
{
	int n; //reads from the scanf
	int i = 0;
	printf("Enter a number of asterisks to print:");
	scanf("%d", &n);
	while(i < n) //problem 8.2 uses a for loop
	{
		printf("*");
		i++;
	}
	printf("\n");
	return 0;
}
