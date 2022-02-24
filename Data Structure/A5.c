#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node* next;
} NODE , *PNODE , **PPNODE;

void Dispaly(PNODE head)
{
	while(head != NULL)
	{

		printf("|%d|\t",head->data);
		head = head -> next;
	}

	printf(" NULL\n");

}

int Count(PNODE head)
{	
	int iCnt = 0;

	while(head != NULL)
	{
		iCnt++;
		head = head -> next;
	}

	return iCnt;
}

void InsertFirst(PPNODE head, int No)
{
	PNODE newn = NULL;

	newn = (PNODE)malloc(sizeof(NODE));

	newn -> data = No;
	newn -> next = NULL;

	if(*head == NULL)
	{

		*head = newn;
	}
	else
	{
		newn -> next = *head;
		*head = newn;
	}
}

void InsertLast(PPNODE head, int no)
{

	PNODE newn = NULL;
	PNODE temp = *head;
	newn = (PNODE)malloc(sizeof(NODE));

	newn -> data = no;
	newn -> next = NULL;

	if(*head == NULL)
	{

		*head = newn;
	}
	else
	{

		while(temp->next != NULL)
		{
			temp = temp ->next;

		}
		temp->next = newn;
		
	}


}


void DeleteFirst(PPNODE head)
{
	PNODE temp = *head;
	if(*head != NULL)
	{

		*head = (*head)->next;

		free(temp);

	}


}
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
		while(temp->next->next != NULL)
		{
			temp = temp->next;

		}

		free(temp->next);
		temp->next = NULL; 

	}
	
}

void InsertAtPos(PPNODE head ,int no,int iPos)
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
		InsertFirst(head,no);

	}
	
	else if(iPos == size+1)
	{
		InsertLast(head,no);
	}
	
	else
	{

		newn = (PNODE)malloc(sizeof(NODE));
		newn -> data = no;
		newn -> next = NULL;
	
		for(i = 1 ; i<iPos-1 ; i++)
		{
			temp = temp->next;

		}

		newn->next = temp->next;
		temp->next = newn;


	}
}

void DeleteAtPos(PPNODE head ,int iPos)
{
	int size = 0;
	PNODE temp = *head;
	PNODE targated = NULL;
	
	int i = 0;
	
	size = Count(*head); 
	
	if(((iPos < 1))||((iPos > size)))
	{
		printf("INVALID POSITION\n");
		return;
	}

	if(iPos == 1)
	{
		DeleteFirst(head);

	}
	
	else if(iPos == size)
	{
		DeleteLast(head);
	}
	
	else
	{

		for(i = 1 ; i<iPos-1 ; i++)
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

	int Value = 0,iRet = 0,pos = 0;


	while(iChoice != 0)
	{
		printf("___________________________________________________________\n");
		printf("Enter Desired Operation you Want to perform on LinkedList:\n");
		printf("1 : Insert the node at First Position\n");
		printf("2 : Insert the node at Last Position\n");
		printf("3 : Insert the node at desired Position\n");
		printf("4 : Delete the node at First Position\n");
		printf("5 : Delete the node at Last Position\n");
		printf("6 : Delete the node at desired Position\n");
		printf("7 : Display the Contents of LinkedList\n");
		printf("8 : Count the numbers of nodes from LinkedList\n");
		printf("0 : Terminate the Application\n");
		printf("___________________________________________________________\n");
		scanf("%d",&iChoice);
		switch(iChoice)
		{
			case 1:
				printf("Enter the Data to Insert\n");
				scanf("%d",&Value);
				InsertFirst(&first,Value);
				break;
			case 2:
				printf("Enter the Data to Insert\n");
				scanf("%d",&Value);
				InsertLast(&first,Value);
				break;
			case 3:
				printf("Enter the Data to Insert\n");
				scanf("%d",&Value);
				printf("Enter the Position\n");
				scanf("%d",&pos);
				InsertAtPos(&first,Value,pos);
				break;
			
			case 4:
				DeleteFirst(&first);
				break;

			
			case 5:
				DeleteLast(&first);
				break;
			case 6:
				printf("Enter the Position\n");
				scanf("%d",&pos);
				DeleteAtPos(&first,pos);
				break;

			case 7:
				printf("Elements in LinkedList are\n");
				Dispaly(first);
				break;

			case 8:
				iRet = Count(first);
				printf("Number of Elements are : %d\n",iRet );
				break;

			case 0:
				printf("Thank you  for using Marvellous LinkedList \n");
				break;

			default:
				printf("Please Enter proper choice\n");		
				break;
		}

	}
	
	return 0;
}
