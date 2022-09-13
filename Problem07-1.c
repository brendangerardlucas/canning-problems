#include <stdio.h>
//This program is a variation of Problem7.c where it is shown that if/else statements can run without { curly braces
int main(void)
{

	int i;
	printf("Type a number (int):");
	scanf("%d", &i);
	if(i > 100)
		printf("The number is bigger than 100.\n");
	else
		printf("The number is not bigger than 100.\n");
	return 0;

}
