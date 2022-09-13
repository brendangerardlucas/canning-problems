#include <stdio.h>
//This program passes a nxn 2d array and computes the sum of the entries
int main(void)
{
	int length;
	printf("Let's make an array.\n");
	printf("Array size: ");
	scanf("%d", &length);
	int sum = 0;
	int array[length][length];
	for(int i = 0; i < length; i++) //fill the array with terminal input and compute sum
	{
		for(int j = 0; j < length; j++)
		{
			printf("Enter int (%d, %d): ", i, j);
			scanf("%d", &array[i][j]);
			sum = sum + array[i][j];
		}
	}
	printf("The sum of the entries is: %d\n", sum);
}
