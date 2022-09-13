#include <stdio.h>
//This program prints all the ints in testdata23 on new lines
int main(void)
{
	int n;
	FILE* testdata23;
	testdata23 = fopen("testdata23.txt", "r");
	while(fscanf(testdata23, "%d", &n) != -1)
	{
		printf("%d", n);
		printf("\n");
	}
	fclose(testdata23);
}
