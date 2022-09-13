#include <stdio.h>
//This program scans and prints an integer from a file called testdata6.txg
int main(void)
{
	FILE* testdata6;
	testdata6 = fopen("testdata6.txt", "r"); //find the file testdata6.txt and read from it
	int n;
	fscanf(testdata6,"%d", &n); //each time you call fscanf, it goes to the next line
	printf("Int in file: %d\n", n);
	fclose(testdata6); //always necessary if fopen
	return 0;
}
