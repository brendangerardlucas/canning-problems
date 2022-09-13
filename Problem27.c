#include <stdio.h>
//This program stores 10 integer numbers from the keyboard using scanf and print them in reverse order
int main(void)
{
	printf("Enter 10 integer numbers:");
	int array[10];
	for(int i = 0; i < 10; i++)
	{
		scanf("%d", &array[i]);
	}
	for(int i = 0; i < 10; i++)
	{
		printf("%d\n", array[9-i]);
	}
}
