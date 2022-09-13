#include <stdio.h>
//This program tests the sign of an integer, or if the integer is 0.
int main(void)
{

        int i;
        printf("Type a number (int):");
        scanf("%d", &i);
        if(i == 0)
        {
                printf("The number is zero.\n");
        }
        else if(i < 0)
        {
                printf("The number is negative.\n");
        }
	else
	{
		printf("The number is positive.\n");
	}

        return 0;

}


