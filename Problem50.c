#include <stdio.h>
#include <stdlib.h>
//This program prints a series of ints in the order scanned using a linked list
typedef struct Node
{
	int data;
	struct Node* next;
} Node;

void insert_node(Node** root, int value)
{
	Node* new_node = malloc(sizeof(Node));
	if(new_node == NULL)
	{
		printf("Memory not allocated.");
		exit(0);
	}
	new_node->next = NULL;
	new_node->data = value;

	Node* curr = *root;
	while (curr ->next != NULL)
	{
		curr = curr->next;
	}
	curr->next = new_node;
}

int main(void)
{
	int scannedint;
	int n = 0;
	Node* root = malloc(sizeof(Node));
	if(root == NULL)
	{
		printf("Memory not allocated.");
		exit(0);
	}
	printf("I will print the following ints:\n");
	while(scanf("%d", &scannedint) == 1)
	{
		if(n == 0)
		{
			root->data = scannedint;
			root->next = NULL;
		}
		else
		{
			insert_node(&root, scannedint);
		}
		n++;
	}
	printf("Scanned ints in order typed:\n");
	for (Node* curr = root; curr != NULL; curr = curr->next)
	{
		printf("%d\n", curr->data);
	}
}
