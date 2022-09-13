#include <stdio.h>
#include <stdlib.h>
//This program prints the number of characters typed into the keyboard
int main(void)
{
	int i = 0;
	while( (getchar()) != EOF)
	{
		i++;
	}
	printf("\n#char = %d \n", i);
}
