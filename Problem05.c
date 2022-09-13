#include <stdio.h>
//This program computes the sum of two scanned integers and prints it
int main(void)
{

	int i1, i2, sum;
	printf("#1:");
	scanf("%d", &i1);
	printf("#2:");
	scanf("%d", &i2);
	sum = i1 + i2;
	printf("Sum:%d\n", sum);

}
