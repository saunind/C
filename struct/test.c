#include <stdio.h>
#include <stdlib.h>

struct stack
{
	int data;
	struct stack *next;
	char string[20];
};

struct stack *create(struct stack *, int, char *str);
//void list(struct stack *);

int main(int argc, char *argv[])
{
	int i, n;
	char str[20] = { "string" };
	struct stack *head = NULL;

	scanf("%d", &n);
	for (i = 0; i <= 5; i++)
	{
		head = create(head, i, str);
		printf("%d<--", head -> data);
		printf("\n%s", head -> string);
	}
	printf("\n");
	free(head);

	return 0;
}

struct stack *create(struct stack *head, int x, char str[])
{
	struct stack *element;
	element = (struct stack *)malloc(sizeof(struct stack));

	element -> next = head;
	element -> data = x;
	element -> string = str;	
	return element;
}
