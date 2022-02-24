#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data ;
	struct node *next;
	struct node *prev;
}NODE,*PNODE,**PPNODE;

void InsertFirst(PPNODE head,int no)
{
	PNODE newn = NULL;

	newn = (PNODE)malloc(sizeof(NODE));

	newn ->data = no;
	newn ->next = NULL;
	newn ->prev = NULL;

	if(*head == NULL)
	{
		*head = newn;

	}   
	else
	{
		newn->next = *head;
		(*head) -> prev = newn;
		*head = newn;

	}

}

void InsertLast(PPNODE head ,int no)
{

	PNODE newn = NULL;
	PNODE temp = *head;
	newn = (PNODE)malloc(sizeof(NODE));

	newn ->data = no;
	newn ->next = NULL;
	newn ->prev = NULL;

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
			newn->prev = temp;

	}
}

void DeleteFirst(PPNODE head)
{
	PNODE temp = *head;

	 if(*head != NULL) // LL Contains atleast 1 Node
	 {
	 	*head = (*head)->next;
	 	free(temp);
	 	if(*head != NULL)
	 	{
	 		(*head)->prev = NULL;
	 	}
	 }
}
/*
void DeleteFirstX(PPNODE head)
{
	if(*head == NULL )
	{

		return;
	}
	else if((*head)->next = NULL)
	{
		free(*head)
		*head = NULL;
		
	}
	else
	{
		*head = (*head)-> next;
		free(*head->prev);
		*head->prev = NULL;
	}

}*/

void DeleteLast(PPNODE head)
{
	PNODE temp = *head;

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
		while(temp->next != NULL)
		{
			temp = temp->next;
		}

		temp->prev->next = NULL;

		free(temp);

	}
}

void Display(PNODE head)
{
	while(head != NULL)
	{
		printf("|%d|->",head->data);
		head = head -> next;
	}

	printf("NULL\n");

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

void InsertAtPos(PPNODE head,int no,int iPos)
{	
	PNODE newn = NULL;
	PNODE  temp = *head; 
	int iSize = 0,i = 0;
	iSize  = Count(*head);


	if((iPos<1)||(iPos>iSize +1))
	{
		printf("INVALID POSITION\n");
		return;
	}

	if(iPos == 1)
	{
		InsertFirst(head,no);

	}
	else if(iPos == iSize+1)
	{
		InsertLast(head,no);
	}
	else
	{
		newn = (PNODE)malloc(sizeof(NODE));

		newn -> data = no;
		newn -> prev = NULL;
		newn -> next = NULL;

		for(i = 0;i<iPos-1;i++)
		{
			temp = temp->next;

		}

		newn->next = temp->next;
		newn->next->prev = newn;
		temp->next = newn;
		newn->prev = temp;


	}


}
void DeleteAtPos(PPNODE head,int iPos)
{

	PNODE  temp = *head; 
	int i = 0;
	iSize  = Count(*head);


	if((iPos<1)||(iPos>iSize +1))
	{
		printf("INVALID POSITION\n");
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

		for(i = 0;i<iPos-1;i++)
		{
			temp = temp->next;

		}

		temp->next = temp->next->next;
		free(temp->next->prev);
		temp->next->prev =temp;

}
//////////////////////////////////////////////////////////////////////////
int main()
{
	PNODE first = NULL;
	int iRet = 0;
	int iChoice = 1;
	int iValue = 0;
	int iPos = 0;

	while(iChoice != 0)
	{

		printf("_________________________________________________\n");
		printf("Enter your Desired Choice\n");
		printf(" 1: INSERT your Data at first Position\n");
		printf(" 2: INSERT your Data at last Position\n");
		printf(" 3: INSERT your Data at At Position\n");
		printf(" 4: Delete your Data at first Position\n");
		printf(" 5: Delete your Data at Last Position\n");
		printf(" 6: Delete your Data at at Position\n");
		printf(" 7: Display the elements from the LinkedList\n");
		printf(" 8: Count the elements from the LinkedList\n");
		printf(" 0: Terminate your LinkedList\n");
		printf("___________________________________________________\n");
		scanf("%d",&iChoice);
		
		switch(iChoice)
		{
			case 1:
			 		printf("Enter the Data \n");
			 		scanf("%d",&iValue);
			 		InsertFirst(&first,iValue);
			 		break;

			case 2:
			 		printf("Enter the Data \n");
			 		scanf("%d",&iValue);
			 		InsertLast(&first,iValue);
			 		break;


			case 3:
			 		printf("Enter the Data \n");
			 		scanf("%d",&iValue);
			 		printf("Enter the Position\n");
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
					printf("Elements from the LinkedList are : ");
					Display(first);
					break;

			case 8:
					iRet = Count(first);
					printf("Count of Elements from LinkedList is : |%d|\n",iRet);
					break;

			case 0:
					printf("Thank You For using Marvellous LinkedList");
					break;

			default:
					printf("INVALID CHOICE\n");

					break;

		}			

	}
	
	return 0;
}
