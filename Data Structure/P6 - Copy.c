#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *next;

}NODE,*PNODE,**PPNODE;

void Display(PNODE head)
{
	while(head->next != NULL)
	{
		printf("|%d|->",head->data);
		head = head->next;

	}
	printf("NULL\n");

}

int Count(PNODE head)
{
	int iCnt = 0;
	while(head->next != NULL)
	{
		iCnt++;
		head = head->next;

	}

	return iCnt;
}

void InsertFirst(PPNODE head,int No)
{
	
	// STEP 1

	PNODE newn = NULL;

	//STEP 2
	newn = (PNODE)malloc(sizeof(NODE));
	newn -> data = No;
	newn -> next = NULL;

	//STEP3

	if(*head == NULL)
	{
		*head = newn;

	}
	else
	{
		newn->next = (*head);
		*head = newn;
	}

}

void InsertLast(PPNODE head,int No)
{

	// STEP 1

	PNODE newn = NULL;
	PNODE temp = *head;
	//STEP 2
	newn = (PNODE)malloc(sizeof(NODE));
	newn -> data = No;
	newn -> next = NULL;

	//STEP3

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

	if(temp == NULL)   // if none Node are present
	{
		return;
	}
	
	else if((*head)->next == NULL)  //if 1 node is Present
	{
		free(*head);

		*head = NULL;

	}
	else
	{
		while(temp ->next->next == NULL)  // many node are present
		{
			temp = temp->next;

		}
		free(temp->next);

		temp->next = NULL;


	}

}

void InsertAtPos(PPNODE head,int No,int iPos)
{
	PNODE newn = NULL;
	PNODE temp = *head;
	
	int iSize = 0;
	iSize = Count(*head);
	int i = 0;

	if((iPos<1)||(iPos>iSize+1))
	{
		return;

	}
	if(iPos == 1)
	{
		InsertFirst(head,No);

	}
	else if(iPos == iSize+1)
	{
		InsertLast(head,No);

	}
	else
	{
		newn = (PNODE)malloc(sizeof(NODE));
		newn -> data = No;
		newn -> next = NULL;

		for(i = 1;i < iPos-1 ; i++)
		{
			temp = temp->next;

		}
		newn->next = temp->next;
		temp->next = newn;



	}

}
void DeleteAtPos(PPNODE head ,int iPos)
{	
	PNODE temp = *head;	
	PNODE targated = NULL;
	int iSize = 0;
	iSize = Count(*head);
	int i = 0;


	if((iPos < 1)||(iPos > iSize ))
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
		for(i = 1;i<iPos-1;i++)
		{
			temp = temp-> next;
		}

		targated = temp->next;
		temp->next = targated->next;

		free(targated);
	}

}

int main()
{
	PNODE first = NULL;

	int iChoice = 1,iValue = 0,iPos = 0,iRet = 0;

	while(iChoice != 0)
	{
		printf("__________________________________________________________\n");
		printf("Enter your Desired Choice\n");
		printf("1 :  INSERT at first position\n");
		printf("2 :  INSERT at Last position\n");
		printf("3 :  INSERT at At given position\n");
		printf("4 :  DELETE at first position\n");
		printf("5 :  DELETE at Last position\n");
		printf("6 :	 DELETE at At given position\n");
		printf("7 :  DISPLAY your LinkedList\n");
		printf("8 :  COUNT your LinkedList elements\n");
		printf("0 :  Terminate your LinkedList\n");
		printf("__________________________________________________________\n");

		scanf("%d",&iChoice);
		
		switch(iChoice)
		{
			case 1: 
					printf("Enter your Data to INSERT\n");
					scanf("%d",&iValue);
					InsertFirst(&first,iValue);
					break;
			case 2: 
					printf("Enter your Data to INSERT\n");
					scanf("%d",&iValue);
					InsertLast(&first,iValue);
					break;
			case 3: 
					printf("Enter your Data to INSERT\n");
					scanf("%d",&iValue);
					printf("Enter your position\n");
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
					printf("Enter your position\n");
					scanf("%d",&iPos);
					DeleteAtPos(&first,iPos);
					break;		
		
			case 7: 
					printf("Elements in LinkedList are :\n");
					Display(first);
					break;
			case 8: 
					iRet = Count(first);
					printf("Count of Elements is:%d\n",iRet);
					break;
			
			case 0: 
					printf("Thankyou for using Marvellous LinkedList\n");		
					break;

			default :
					printf("Please Enter Corret Choice\n");
					break;

		}

	}


	return 0;
}