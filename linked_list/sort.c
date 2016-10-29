#include <stdio.h>
#include <stdlib.h>

#define NVALUES 6

struct node
{	
	int value;
	struct node *next;
};

extern struct node *mk_node(int v);
extern void print_list(struct node *head);
extern struct node *sort_list(struct node *head);
extern void free_list(struct node *head);

int initial_contents[] = { 3, 8, 2, 5, 1, 9 };

int main(void)
{
	struct node *head = NULL;
	struct node *curp = NULL;
	int i = 0;

	for ( i = 0; i < NVALUES; i++ ) {
		curp = mk_node(initial_contents[i]);
		curp->next = head;
		head = curp;
	}
	printf("%d\n", curp->value);

	print_list(head);
	head = sort_list(head);
	print_list(head);
//	free_list(head);

	return EXIT_SUCCESS;
}

struct node *mk_node(int v)
{
	struct node *newp = malloc(sizeof(struct node));
	newp->value = v;
	newp->next = NULL;

	return newp;
}

void print_list(struct node *head)
{
	printf("List: ");
	struct node *ptr = head;

	while (ptr != NULL) {
		printf("%d ", ptr->value);
		ptr = ptr->next;
	}

	putchar('\n');
}

struct node *sort_list(struct node *head)
{
	struct node *tmpPtr;
	struct node *tmpNxt;

	tmpPtr = head;
	tmpNxt = head->next;

	int a, tmp;

	while ( tmpNxt != NULL ) {
		a = tmpPtr->value;
		while ( tmpNxt != tmpPtr && tmpNxt->value < a ) {
			tmp = a;
			tmpPtr->value = tmpNxt->value;
			tmpNxt->value = tmp;
			tmpPtr = tmpPtr->next;
		}	
		tmpPtr = head;
		tmpNxt = tmpNxt->next;
	}

	return tmpPtr;
}
		
