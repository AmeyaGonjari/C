#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;


void InsertFirst(PPNODE head, int no)
{
	PNODE newn = NULL;

	newn = (PNODE)malloc(sizeof(NODE));

	newn-> data = no;
	newn-> next = NULL;	
	
	if(*head == NULL)
	{

		*head = newn;
	}	
	else
	{
		newn-> next = *head;
		*head = newn;
	}

}

void Display(PNODE Head)
{
	while(Head != NULL)
	{
		printf("%d\t",Head->data);
		Head = Head -> next;
	}
}



int main()
{
	PNODE First = NULL;

	InsertFirst(&First,11);
	InsertFirst(&First,21);
	InsertFirst(&First,11);

	Display(First);	
	return 0 ;
}