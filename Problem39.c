#include <stdio.h>
//This is a program that explains the shift operator
int main (void)
{
	int x = 1;
	unsigned int y = 1;
	int limit = sizeof(int) * 8;
	printf("x y\n"); //column headers
	for(int i = 0; i < limit; i++)
	{
		x = x << 1;
		y = y << 1;
		printf("%d %u\n", x, y);
	}
	printf("As the bits shift to the left, 0...001 to 0...010 to 0...100 until 1...000 the power of 2 increases until the 1 falls of the edge of the byte, then the output is 0; the 4 bytes in the integer can no longer support the larger powers of 2 as an integer holds only 32 bits.\n");
}
