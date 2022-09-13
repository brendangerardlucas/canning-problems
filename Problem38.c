#include <stdio.h>
//This program removes unnecessary spaces from a file named in argv[1]
int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("No argv[1].\n");
		return 0;
	}
	FILE* argvf = fopen(argv[1], "r");
	char scannedchar, lastchar;
	while (fscanf(argvf, "%c", &scannedchar) == 1)
	{
		if (scannedchar == ' ' && lastchar == ' ')//if two consecutive spaces, skip
		{
			continue;
		}
		else
		{
			printf("%c", scannedchar);
		}
		lastchar = scannedchar;
	}
	fclose(argvf);
}

