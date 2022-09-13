#include <stdio.h>
//This program computes the inner product of two 8-element floating point vectors
float inner(float u[], float v[], int size)
{
	float dot = 0.0;
	for(int i = 0; i < size; i++)
	{
		dot = dot + u[i] * v[i];
	}
	return dot;
}
int main(void)
{
	float vec1[8]; //declare the vectors
	float vec2[8];
	for(int i = 0; i < 8; i++) //standard input the vectors (2 vectors)
	{
		printf("Enter element %d for vector 1:", i);
		scanf("%f", &vec1[i]);
		printf("Enter element %d for vector 2:", i);
		scanf("%f", &vec2[i]);
	}
	float product = inner(vec1, vec2, 8);
	printf("The inner product is: %f\n", product);
}
