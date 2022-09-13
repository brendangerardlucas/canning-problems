#include <stdio.h>
//This program prints 5 integer values from testdata9 using a foor loop and fscanf
int main(void)
{
	int n;
	FILE* testdata9;
	testdata9 = fopen("testdata9.txt", "r");
	printf("Five values from testdata9.txt:\n");
	for(int i = 0; i < 5; i++)
	{
		fscanf(testdata9, "%d", &n);
		printf("%d\n", n);
	}
	fclose(testdata9);
	return 0;
}
