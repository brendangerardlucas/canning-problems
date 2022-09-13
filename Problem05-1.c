#include <stdio.h>
//This program prints the sum of 2 scanned integers using %i
int main(void)
{
	//%i is like %d but it can take hexadecimal (0x) or octal (0)
	int i1, i2;
	printf("#1:");
	scanf("%i", &i1);
	printf("#2:");
	scanf("%i", &i2);
	int sum = i1 + i2;
	printf("Sum:%i\n", sum);

}
