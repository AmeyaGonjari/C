#include<stdio.h>
#include<stdlib.h.>

struct node
{
	int data;

	struct node *next;

};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;



void InsertFirst(PPNODE head,int No)
{
	PNODE newn = NULL;

	newn = (PNODE)malloc(sizeof(NODE));

	newn->data = No;
	newn->next = NULL;


	if(*head == NULL)
	{
		*head = newn; 
	}
	else
	{
		newn -> next = *head;
		*head = newn;

	}
	printf("\n");
}

void InsertLast(PPNODE head,int No)
{
	PNODE newn = NULL;
	PNODE temp = *head;

	newn = (PNODE)malloc(sizeof(NODE));

	newn->data = No;
	newn->next = NULL;



	if(*head == NULL)
	{
		*head = newn; 
	}
	
	else
	{
	
		while(temp->next != NULL)
		{

			temp = temp->next;

		}

		temp -> next = newn;

	}
	printf("\n");
}

void DeleteFirst(PPNODE head)
{
	PNODE temp = *head;

		if(*head != NULL)
		{
			*head  = (*head)->next;
			free(temp);

		}
	

	
	printf("\n");
}



 void Display(PNODE head)
 {

 	while(head != NULL)
 	{
 		printf("%d\t",head->data);

 		head = head->next;
	}
 
	printf("\n");
 }



 int Count (PNODE head)
 {
 	int iCnt = 0;

 	while(head != NULL)
 	{
 			iCnt++;

 		head = head->next;
	}
 
 	return iCnt;

 }

int main()
{

	PNODE first = NULL;
	int iRet = 0;
	InsertFirst(&first,5);
	InsertFirst(&first,4);
	InsertFirst(&first,3);
	InsertFirst(&first,2);
	InsertFirst(&first,1);

	printf("Data From linkedList is \n");
	Display(first);

	InsertFirst(&first,121);

	printf("Data From Updated linkedList is  At First Psotion\n");
	Display(first);
	
	InsertLast(&first,101);

	printf("Data From  Updated linkedList is at Last Position \n");

	Display(first);

	
	printf("Count of Current linkedList is \n");

	iRet = Count(first);

	printf("%d\n",iRet );

	DeleteFirst(&first);

	printf("Data   Deleted  From linkedList is at 1st Position \n");

	Display(first);


	return 0;
}