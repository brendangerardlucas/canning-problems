#include <stdio.h>
//This program prints an empty box of *'s in the terminal's standard input/output of <21x21 
int main(void)
{
	printf("Let's print an empty box!\n");
	int L;
	printf("Enter the length of the box (<21): ");
	scanf("%d", &L);
	int H;
	printf("Enter the height of the box (<21): ");
	scanf("%d", &H);
	if(L < 21 && H < 21)
	{
		for(int j = 0; j < H; j++) //j height index
		{
			for(int i = 0; i < L; i++) //i length index
			{
				if(j > 0 && j < H-1 && i > 0 && i < L - 1)
				{
					printf(" ");
				}
				else
				{
					printf("*");
				}
			}
			printf("\n");
		}
	}
}
