#include <stdio.h>
#include <stdlib.h>
//This program prints the sum of digits of an integer from a file named in argv[1]
int summation(FILE* index)
{
	char n;
	int total = 0;
	int j = 0;
	while((j = fscanf(index, "%c", &n)) != EOF)
	{
		if(n != 10) //character 10 is the new line character, which should not be added
		{
			total = total + n - '0'; //subtract the 0 character to normalize char/int conv
		}
	}
	return total;
}
int main(int argc, char *argv[])
{
	if(argc < 2)
	{
		printf("No argv[1].\n");
	}
	else
	{
		FILE* argvf;
		argvf = fopen(argv[1], "r");
		int sum = summation(argvf);
		printf("The sum of the digits in %s is: %d\n", argv[1], sum);
		fclose(argvf);
	}
	return 0;
}

