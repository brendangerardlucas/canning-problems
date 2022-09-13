#include <stdio.h>
//This program computes the factorial of a number from command line recursively

int myFactorial(int input)
{
	if (input <= 1)
	{
		return 1;
	}
	int output = input * myFactorial(input - 1);
	return output;
}

int main(void)
{
	int input;
	printf("To compute factorial of:");
	scanf("%d", &input);
	if(input <= 0)
	{
		printf("Please input positive integer.");
	}
	int output = myFactorial(input);
	printf("Factorial of %d is: %d\n", input, output);
}
