#include <stdio.h>
//This program prints a LxH box of <21x21 asterisks
int main(void)
{
	int test;
	int l;
	int h;
	do
	{
		printf("Let's make a box!\n");
		printf("Enter length L: ");
		scanf("%d", &l);
		printf("Enter height H: ");
        	scanf("%d", &h);
		if( l >= 21 || h >= 21)
		{
			test = 0;
			printf("Dimensions L, H must each be < 21. Try again.\n"); 
		}
		else
		{
			test = 1;
		}
	} while( test == 0 );
	for(int j = 0; j < h; j++)
	{
		for (int i = 0; i < l; i++)
		{
			printf("*");
		}
		printf("\n");
	}
}
