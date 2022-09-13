#include <stdio.h>
#include <stdlib.h>
//print the sum of digits of an integer from a file named in argv[1]
//ensuring that summation function takes integer argument
int summation(int index, int total)
{
	total = total + index;
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
		int sum = 0;
		char n;
	        while((fscanf(argvf, "%c", &n)) != EOF)
	        {
	                if(n != 10) //character 10 is the new line character, which sho>
	                {
				n = n - '0';
				sum = summation(n, sum);
	                }
	        }

		printf("The sum of the digits in %s is: %d\n", argv[1], sum);
		fclose(argvf);
	}
	return 0;
}

