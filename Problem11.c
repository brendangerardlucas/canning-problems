#include <stdio.h>
//This program tests whether a scanned int is equal to 0
int main(void)
{

        int i;
        printf("Type a number (int):");
        scanf("%d", &i);
        if(i == 0)
        {
                printf("The number is equal to 0.\n");
        }
        else
        {
                printf("The number is not equal to 0.\n");
        }

        return 0;

}


