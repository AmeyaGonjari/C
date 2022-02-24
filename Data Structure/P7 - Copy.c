#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *next;

}NODE,*PNODE,**PPNODE;


void Display(PNODE head)
{
	while(head != NULL)
	{
		printf("%d->",head->data);
		head = head->next;
	}
	printf("\n");

}

int Count(PNODE head)
{	
	int iCnt = 0;
	while(head != NULL)
	{
		iCnt++;
		head = head->next;
	}

	return iCnt;
}

void InsertAtFirst(PPNODE head ,int No)
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
		newn->next = *head;
		*head = newn;		

	}



}
void InsertAtLast(PPNODE head ,int No)
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

		temp->next = newn;


	}

}
void DeleteFirst(PPNODE head)
{
	PNODE temp =*head;
	if(*head != NULL)
	{
		*head = (*head)->next;
			free(temp);
	}
}



void DeleteLast(PPNODE head)
{
	PNODE temp =*head;
	if(*head == NULL)
	{
		return;
	}
	else if((*head)->next == NULL)
	{
		free(*head);
		*head = NULL;
	}
	else
	{
		while(temp->next->next != NULL)
		{
			temp = temp->next;
				
		}
		free(temp->next);
		temp->next = NULL;
	}

}

void InsertAtPos(PPNODE head,int No,int iPos)
{
	int size = 0;
	PNODE newn = NULL;
	PNODE temp = *head;
	int i = 0;
	size = Count(*head); 
	
	if(((iPos < 1))||((iPos > size+1)))
	{
		printf("INVALID POSITION\n");
		return;
	}

	if(iPos == 1)
	{
		InsertAtFirst(head,No);

	}
	
	else if(iPos == size+1)
	{
		InsertAtLast(head,No);
	}
	
	else
	{

		newn = (PNODE)malloc(sizeof(NODE));
		newn -> data = No;
		newn -> next = NULL;
	
		for(i = 1 ; i<iPos-1 ; i++)
		{
			temp = temp->next;

		}

		newn->next = temp->next;
		temp->next = newn;


	}
}
void DeleteAtPos(PPNODE head,int iPos)
{


	int iSize = 0;
	iSize = Count(*head);
	PNODE temp = *head;
	PNODE targated = NULL;

	if((iPos<1)||(iPos>iSize+1))
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

		int  i = 0;
		for(i = 1;i<iPos-1;i++)
		{
			temp = temp->next;

		}

			targated = temp->next;
			temp->next = targated->next;
			free(targated);
	}

}
int main()
{

	PNODE first = NULL;
	int iChoice = 1;
	int iPos = 0;
	int iRet = 0;
	int iValue = 0;

	while(iChoice != 0)
	{
		printf("___________________________________________________\n");
		printf("Enter your Choice:\n");
		printf("1 : Insert your data At First \n");
		printf("2 : Insert your data At Last \n");
		printf("3 : Insert your data At Given Position \n");
		printf("4 : Delete your data At First \n");
		printf("5 : Delete your data At Last \n");
		printf("6 : Delete your data At Given Position \n");
		printf("7 : Display the data from your LinkedList \n");
		printf("8 : Count the elements from your LinkedList \n");
		printf("0 : Terminate your LinkedList \n");
		printf("___________________________________________________\n");
		scanf("%d",&iChoice);

		switch(iChoice)
		{
			case 1:
					printf("Enter your data for Insertion\n");
					scanf("%d",&iValue);
					InsertAtFirst(&first,iValue);
					break;
			
			case 2:
				    printf("Enter your data for Insertion\n");
					scanf("%d",&iValue);
					InsertAtLast(&first,iValue);
					break;

			case 3:
				    printf("Enter your data for Insertion\n");
					scanf("%d",&iValue);
					printf("Enter your Position\n");
					scanf("%d",&iPos);
					InsertAtPos(&first,iValue,iPos);
					break;

			case 4:
					DeleteFirst(&first);
					break;
			case 5:
				   
					DeleteLast(&first);
					break;

			case 6:
				   	printf("Enter your Position\n");
					scanf("%d",&iPos);
					DeleteAtPos(&first,iPos);
					break;
			case 7:
					printf("Elements from  your LinkedList is :\n");
					Display(first);
					break;
			case 8:
					iRet = Count(first);
					printf("Count of your elements from LinkedList is %d\n",iRet);
					break;
			case 0:
					printf("Thankyou for using Ameya's LinkedList\n");			
					break;
		
			default:
					printf("INVALID DATA\n");

		}

	}

	return 0;
}