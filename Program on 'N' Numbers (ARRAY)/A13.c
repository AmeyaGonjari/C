
// take N numbers and Check if number is present


//take n Numbers and return the index of  1st Enterd number


#include<stdio.h>
#include<stdlib.h>



int FirstOccurence(int * p,int iLength,int No)
{
	int iCnt = 0;
	int iAns = 0; 
	
	for(iCnt = iLength-1 ; iCnt >= 0 ; iCnt-- )
	{
	
		if(*p == No)
		{
			iAns = iCnt ;
			break;
		
		}

		else
		{
			iAns = -1;
		}
		*p++;
	}
	return iAns;
}
int main()
{
	int iSize = 0;
	int iValue = 0;
	int  * Arr = NULL;
	int iCnt = 0;
	int iRet = 0;

	printf("Enter the Size of Array: \n");
	scanf("%d",&iSize);


	printf("___________________________\n");

	printf("Enter the Number:\n");
	scanf("%d",&iValue);

	Arr = (int *)malloc(iSize*sizeof(int));


	printf("Enter %d Elements\n",iSize);

	
	for(iCnt = 0 ;iCnt<iSize;iCnt++)
	{
		scanf("%d",&Arr[iCnt]);
	}
	printf("Enterd data is\n");

	
	for(iCnt = 0; iCnt<iSize;iCnt++)
	{
		printf("%d\t",Arr[iCnt]);
	}
	printf("\n");

	


	iRet = FirstOccurence(Arr,iSize,iValue);

	if(iRet == -1)
	{
		printf("Their is no Such  number");
	}
	else
	{

	printf("Index Number is :%d",iRet);
	}
free(Arr);
return 0;
}