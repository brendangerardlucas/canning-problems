#include <stdio.h>
//This program prints an integer number n asterisks where n is retrieved by fscanf from the file testdata8.txt
int main(void)
{
	int n; //reads from testdata8.txt using fscanf
	FILE* testdata8; //problems 8.1 and 8.2 use scanf
	testdata8 = fopen("testdata8.txt", "r");
	printf("Asterisks per testdata8.txt:");
	fscanf(testdata8, "%d", &n);
	for(int i = 0; i < n; i++) //problem 8.1 uses a while loop
	{
		printf("*");
	}
	printf("\n");
	fclose(testdata8);
	return 0;
}
