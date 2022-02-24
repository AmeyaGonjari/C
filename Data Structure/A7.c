#include<stdio.h>
#include<stdlib.h>
typedef struct  node
{
	int data;
	struct node * next;
	
}NODE,*PNODE,**PPNODE;
void Display(PNODE head,PNODE tail)
{
	if((head == NULL)&&(tail == NULL))
	{
		return;
}
	do
	{
		printf("|%d|->",head->data);
		head = head->next;
	
	}while(head != tail->next);

	printf("\n");
}

int Count(PNODE head,PNODE tail)
{
	int iCnt = 0;
	
	if((head == NULL)&&(tail == NULL))
	{
		return 0;
	}

	do
	{
			iCnt++;
			head = head->next;
	
	}while(head != tail->next);

	printf("\n");

return iCnt;
}
void InsertFirst(PPNODE head,PPNODE tail,int no)
{
	PNODE newn = NULL;
	newn = (PNODE)malloc(sizeof(NODE));
	newn -> data = no;
	newn -> next = NULL;

	if((*head == NULL)&&(*tail == NULL))
	{	
		*head = newn;
		*tail = newn;
	}
	else
	{
		newn->next = *head;
		*head = newn;
	}

	(*tail)->next = *head;            // to maintain circular

}
void InsertLast(PPNODE head,PPNODE tail,int no)
{
	PNODE newn = NULL;
	newn = (PNODE)malloc(sizeof(NODE));
	newn -> data = no;
	newn -> next = NULL;

	if((*head == NULL)&&(*tail == NULL))
	{	
		*head = newn;
		*tail = newn;
	}
	else
	{
		(*tail)->next = newn;
		*tail = newn;
	}

	(*tail)->next = *head;  
}
void InsertAtPos(PPNODE head,PPNODE tail,int no,int iPos)
{
	int iSize = Count(*head);
	int i = 0;
	PNODE temp = *head;
	PNODE targated = NULL;
	if((iPos<1)&&(iPos > iSize + 1))
	{
		return;
	}
	if(iPos == 1)
	{
		InsertFirst(head , no);
	}
	else if(iPos == iSize)
	{
		InsertLast(head,no);
	}
	else
	{
		for(i = 0;i < iPos - 1; i++)
		{
			temp = temp->next;
		}

		newn->next = temp->next;
		temp->next = newn;

		}

	*tail->next = *head;
}
void DeleteFirst(PPNODE head,PPNODE tail)
{
	if((*head == NULL)&&(*tail == NULL))
	{
		return;
	}
	else if(*head == *tail)
	{
		free(*head);
		*head == NULL;
		*tail == NULL;
	}
	else
	{
		*head =(*head)->next;
		free((*tail)->next);		
		(*tail)->next = *head;
	}

}
void DeleteLast(PPNODE head,PPNODE tail)
{
	PNODE temp = *head;
	if((*head == NULL)&&(*tail == NULL))
	{
		return;
	}
	else if(*head == *tail)
	{
		free(*head);
		*head == NULL;
		*tail == NULL;
	}
	else
	{	
		if(temp->next != *tail)
		{
			temp = temp->next;
		}

		free(*tail);
		*tail = temp;
		(*tail)->next  = *head;
	}
}
void DeleteAtPos(PPNODE head,PPNODE tail,int iPos)
{
	int iSize = Count(*head);
	int i = 0;
	PNODE temp = *head;
	PNODE targated = NULL;
	if((iPos<1)&&(iPos > iSize + 1))
	{
		return;
	}
	if(iPos == 1)
	{
		DeleteFirst(head);
	}
	else if(iPos == iSize)
	{
		DeleteLast(head);
	}
	else
	{
		for(i = 0;i < iPos - 1; i++)
		{
			temp = temp->next;

		}

		targated = temp->next;
		temp->next = targated->next;
		free(targated);

}

	(*tail)->next = *head;
}
int main()
{
	PNODE first = NULL;
	PNODE last  = NULL;
	int iRet = 0;

	InsertFirst(&first,&last,51);
	InsertFirst(&first,&last,21);
	InsertFirst(&first,&last,11);
	InsertLast(&first,&last,101);

	Display(first,last);
	iRet = Count(first,last);
	printf(" Number of Elements are %d\n",iRet);

	DeleteFirst(&first,&last);
	DeleteLast(&first,&last);

	Display(first,last);
	iRet = Count(first,last);
	printf(" Number of Elements are %d\n",iRet);

	return 0;
}