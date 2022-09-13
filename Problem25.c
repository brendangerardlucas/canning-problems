#include <stdio.h>
//This program prints the sum of the integers from testdata25.txt
int main(void)
{
	int n;
	int sum = 0;
	FILE* testdata25;
	testdata25 = fopen("testdata25.txt", "r");
	while(fscanf(testdata25, "%d", &n) != -1)
	{
		sum = sum + n;
	}
	printf("Sum testdata25: %d\n", sum);
	fclose(testdata25);
}
