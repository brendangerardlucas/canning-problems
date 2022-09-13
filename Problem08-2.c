#include <stdio.h>
//This program prints a number of asterisks obtained from scanf using a for loop
int main(void)
{
	int n; //reads from the scanf
	printf("Enter a number of asterisks to print:");
	scanf("%d", &n);
	for(int i = 0; i < n; i++) //problem 8.1 uses a while loop
	{
		printf("*");
	}
	printf("\n");
	return 0;
}
