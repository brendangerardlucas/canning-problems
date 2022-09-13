#include <stdio.h>
#include <stdlib.h>
//This program prints  args from command line on each new line in reverse order
int main(int argc, char *argv[])
{
	for(int i = 0; i < argc; i++)
	{
		printf("%s", argv[argc - 1 - i]);
		printf("\n");
	}
}
