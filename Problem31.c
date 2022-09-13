#include <stdio.h>
//This program will red 10 integers from a file specified by argv[1] into an array and then perform the bubble sort algorithm
void bubblesort(int array[], int size)
{
	for(int i = 0; i < size; i++) //bubble sort the array
	{
		for(int j = 0; j < size - 1; j++)
		{
			if(array[j] > array[j + 1])
			{
				int temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
}
int main(int argc, char *argv[])
{
	if(argc < 2)
	{
		printf("No argv[1]\n");
		return 1;
	}
	FILE* argvf = fopen(argv[1], "r");
	int array[10];
	int n;
	for(int i = 0; i < 10; i++) //read the file into the array
	{
		fscanf(argvf, "%d", &n);
		array[i] = n;
	}
	bubblesort(array, 10);
	printf("File contents in order:\n");
	for(int l = 0; l < 10; l++)
	{
		printf("%s", argv[1]);
		printf("[%d]: %d\n", l, array[l]);
	}
	fclose(argvf);
	return 0;
}
