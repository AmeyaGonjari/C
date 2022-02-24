#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next; 	
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;


void InsertFirst(PPNODE Head ,int no)
{
	PNODE newn = NULL;

	newn = (PNODE)malloc(sizeof(NODE));     //STEP 1

	
	newn->data = no;						//STEP 2
	newn->next = NULL;



	if(*Head == NULL)     					//STEP 3
	{
		*Head = newn;

	}
	else
	{
		newn -> next =  *Head;
		*Head = newn;
		
	}


}

void InsertLast(PPNODE Head ,int no)
{
	PNODE newn = NULL;
	PNODE temp = *Head;
	newn = (PNODE)malloc(sizeof(NODE));     //STEP1


	newn->data = no;						//STEP2
	newn->next = NULL;


	if(*Head == NULL)
	{
		*Head = newn;

	}
	else
	{
		while(temp->next != NULL )
		{
			temp  = temp -> next;

		}
	
		temp -> next = newn;

	}


}


void Display(PNODE Head)
{
	while(Head != NULL)
	{
		printf("%d\t",Head->data);
		Head = Head->next;

	}

	printf("\n");

}

int Count (PNODE Head)
{
	int iCnt = 0;
	while(Head != NULL)
	{
		iCnt++;
		Head = Head->next;

	}
	return iCnt;
}

void DeleteFirst(PPNODE Head)
{
	PNODE temp = *Head;
	if(*Head != NULL)
	{

		*Head = (*Head)->next;
		free(temp);

	}

}

void DeleteLast(PPNODE Head)
{
	PNODE temp = *Head;
	if(*Head == NULL)
	{

		return ;
		
	}
	else if((*Head)->next)
	{
		free(*Head);

	}

}




int main()
{
	PNODE first = NULL;

	int iRet = 0;

	InsertFirst(&first,101);   //InsertFirst(50,101)
	InsertFirst(&first,51);   //InsertFirst(50,51)
	InsertFirst(&first,21);   //InsertFirst(50,21)
	InsertFirst(&first,11);   //InsertFirst(50,11)


	InsertLast(&first,111);   //InsertFirst(50,11)

	Display(first);
	iRet = Count(first);

	DeleteFirst(&first);
	Display(first);
	iRet = Count(first);

	printf("Count is : %d\n",iRet);
	return 0;
}