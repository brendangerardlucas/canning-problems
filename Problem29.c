#include <stdio.h>
//This program finds the average of 4 ints from a file as a double
int main(void)
{
	FILE* testdata29;
	testdata29 = fopen("testdata29.txt", "r");
	int n;
	double sum = 0;
	double num = 4.0;
	//for(i = 0, fscanf(testdata29, "%d", &n) != EOF, i++)
	while(fscanf(testdata29, "%d", &n) != EOF)
	{
		sum = sum + (double)(n);
	}
	printf("Average from testdata29.txt: %f\n", sum/num);
	fclose(testdata29);
}

