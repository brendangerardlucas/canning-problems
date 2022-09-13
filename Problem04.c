#include <stdio.h>
//This program prints an int from scanf using printf
int main(void)
{
	//scanf(keypress) --> char
	int s;
	printf("Monkey see int:");
	scanf("%d", &s);
	printf("Monkey do int:%d\n", s);
	return(0);
}
