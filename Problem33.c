#include <stdio.h>
//This program calculates the persistence number of each integer entered by standard input until EOF
void input(void)
{
	printf("Find the persistence number of int:");
}

int main(void)
{
	int scannedint; //process the int as a string
	input();
	while(scanf("%d", &scannedint) == 1)
	{
		int length = snprintf(NULL, 0, "%d", scannedint);
		char intstring[length];
		snprintf(intstring, length + 1, "%d", scannedint);
		int persistence = 0;
		while(length > 1)
		{
			int product = 1;
			for(int i = 0; i < length; i++)
			{
				intstring[i] = intstring[i] - '0'; //convert char to int
				product = product * intstring[i];
			}
			length = snprintf(NULL, 0, "%d", product);
			snprintf(intstring, length + 1, "%d", product);
			persistence = persistence + 1;
		}
		printf("The persistence number of ");
		printf("%d", scannedint);
		printf(" is: %d\n", persistence); 
		input();
	}
}
