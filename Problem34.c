#include <stdio.h>
//This program simulates call by reference by passing the address of the variables to the function "swap"

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(void)
{
	int m, n;;
	printf("Enter the first integer: ");
	scanf("%d", &m);
	printf("Enter the second integer: ");
	scanf("%d", &n);
	swap(&m, &n);
	printf("Swapped!\n");
	printf("The first integer is now: %d\n", m);
	printf("The second integer is now: %d\n", n);
}
