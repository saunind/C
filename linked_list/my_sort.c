#include <stdio.h>
#include <stdlib.h>

//struct node
//{
//	int data;
//	struct node *next;
//};

typedef struct node
{
	int data;
	struct node *next;
} Node;

Node *makeList(int number);
void printList(Node *head);
Node *sortList(Node *head);

int main(void)
{
	int	initial_contents[] = { 3, 8, 2, 5, 1, 9 };
	int arraySize = sizeof(initial_contents) / sizeof(initial_contents[0]);
	int i = 0;

	Node *head = NULL;
	Node *current = NULL;
	Node *tmp = NULL;


	for ( i = 0; i < arraySize; i++) {
		tmp = makeList(initial_contents[i]);
		tmp->next = head;
		head = tmp;
	}		
	
	printList(head);
	
	return 0;
}

Node *makeList(int n)
{
	Node *newNode = malloc(sizeof(Node));
	newNode->data = n;
	newNode->next = NULL;

	return newNode;
}

void printList(Node *head)
{
	Node *ptr = head;

	while ( ptr != NULL) {
		printf("%d\n", ptr->data);
		ptr = ptr->next;
	}
}

Node sortList(Node *head)
{
	Node *current = head->next;
	while ( current != NULL ) {
	
		while (
			if ( head->data > current->data )	 	
				tmp = head->data;
				
				
