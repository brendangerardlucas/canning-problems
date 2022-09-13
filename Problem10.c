#include <stdio.h>
//This program computes the sum of 20 integers written in testdata10.txt using fscanf and a for loop
int main(void)
{
	FILE* testdata10;
	testdata10 = fopen("testdata10.txt", "r");
	int sum = 0;
	for(int i = 0; i < 20; i++)
	{
		int n;
		fscanf(testdata10, "%d", &n);
		printf("Entry %d:%d\n", i + 1, n);
		sum = sum + n;
	}
	printf("Sum:%d\n", sum);
	fclose(testdata10);
	return 0;
}
