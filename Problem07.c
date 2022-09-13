#include <stdio.h>
//This program tests an integer from scanf for <= 100
int main(void)
{

	int i;
	printf("Type a number (int):");
	scanf("%d", &i);
	if(i > 100)
	{
		printf("The number is bigger than 100.\n");
	}
	else
	{
		printf("The number is not bigger than 100.\n");
	}

	return 0;

}
