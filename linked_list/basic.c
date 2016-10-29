#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};

struct node *BuildTwoThree();
void Push(struct node **headRef, int data);
struct node *BuildWithSpecialCase();
struct node *BuildWithDummyNode();

int main(void)
{
	int initial[] = { 4, 3, 5, 6, 7 };
	int size = sizeof(initial) / sizeof(initial[0]);
//	printf("size is: %d\n", size);

	struct node *head = NULL;
	struct node *myList = NULL;

//	head = BuildTwoThree();
	int i = 0;

//	for ( i = size - 1; i >= 0; i--) {
//		Push(&head, initial[i]);
//	}
    myList = BuildWithSpecialCase();
	while ( myList != NULL ) {
		 printf("%d\n", myList->data);
		 myList = myList->next; 
	}


	return 0;
}

struct node *BuildTwoThree()
{
	struct node *head = malloc(sizeof(struct node));
	struct node *third = malloc(sizeof(struct node));

	head->data = 2;
	head->next = third;
	third->data = 3;
	third->next = NULL;

	return head;
}

void Push(struct node **headRef, int data)
{
	struct node *newNode = malloc(sizeof(struct node));

	newNode->data = data;
	newNode->next = *headRef;
	*headRef = newNode;
}

struct node *BuildWithSpecialCase()
{
    struct node *head = NULL;
    struct node *tail;
    int i;

    Push(&head, 1);
    tail = head;
    for (i = 2; i < 6; i++) {
	Push(&(tail->next), i);
	tail = tail->next;
    }
    
    return(head);
}

struct node *BuildWithDummyNode()
{
    struct node dummy;
    struct node *tail = &dummy;

    int i = 0;

    dummy.next = NULL;
    
    for (i = 0; i < 6; i++) {
	Push(&(tail->next), i);
	tail = tail->next;
    }

    return(dummy.next);
}
