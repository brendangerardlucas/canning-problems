#include <stdio.h>
#include <stdlib.h>
//This program prints args from the command line on each new line
int main(int argc, char *argv[])
{
	for(int i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
		printf("\n");
	}
}
