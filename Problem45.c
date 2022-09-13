#include <stdio.h>
#include <stdlib.h>
//This program demonstrates the deference operator *, and malloc/free
int main(void)
{
	int *a = malloc(sizeof(int));
	*a = 6;
	printf("%d\n", *a);
	free(a);
}
