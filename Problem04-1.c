#include <stdio.h>
//This program prints a char from scanf using printf
int main(void)
{
	//scanf(keypress) --> char
	char s;
	printf("Monkey see char:");
	scanf("%c", &s);
	printf("Monkey do char:%c\n", s);
	return(0);
}
