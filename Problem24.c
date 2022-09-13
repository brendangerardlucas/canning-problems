#include <stdio.h>
//This program reads 15 ints from testdata24.txt into an array of ints and prints it in reverse
int main(void)
{
	FILE* testdata24;
	testdata24 = fopen("testdata24.txt", "r");
	int array[15];
	int n;
	for(int i = 0; i < 15; i++) //make the array
	{
		fscanf(testdata24, "%d", &n);
		array[i] = n;
	}
	fclose(testdata24);
	for(int i = 0; i < 15; i++)
	{
		printf("%d", array[14-i]);
		printf("\n");
	}
}
