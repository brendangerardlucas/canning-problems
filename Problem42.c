#include <stdio.h>
//This computes the factorial of a number from command line iteratively

int myFactorial(int input)
{
	int output = 1;
	for (int i = 0; i < input; i++)
	{
		output = output * (i + 1);
	}
	return output;
}

int main(void)
{
	int input;
	printf("To compute factorial of:");
	scanf("%d", &input);
	printf("Factorial of %d is: %d\n", input, myFactorial(input));
}
