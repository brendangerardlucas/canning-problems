#include <stdio.h>
#include <stdlib.h>
//This program finds the absolute value of a scanned int
int main(void)
{
	int i = 0;
	printf("Find absolute value of: ");
	scanf("%d", &i);
	i = abs(i);
	printf("Absolute value is: %d\n", i);
}
