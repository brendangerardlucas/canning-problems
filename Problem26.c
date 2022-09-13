#include <stdio.h>
#include <ctype.h>
//This program prints the text character content of testdata26.txt in capital letters
int main(void)
{
	FILE* testdata26;
	testdata26 = fopen("testdata26.txt", "r");
	int c;
	while((c = fgetc(testdata26)) != EOF)
	{
		printf("%c", toupper(c));
	}
	fclose(testdata26);
}
