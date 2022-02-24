// take N numbers and Check if number is present


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>



bool CheckNumber(int * p,int iLength,int No)
{
	int iCnt = 0;
	bool bAns = false ; 
	for(iCnt = 0 ;iCnt<iLength;iCnt++ )
	{
	
		if(*p == No)
		{
			bAns = true;
			break;
		}
			*p++;	
	}
	return bAns;
}
int main()
{
	int iSize = 0;
	int iValue = 0;
	int  * Arr = NULL;
	int iCnt = 0;
	bool bRet = false;
	printf("___________________________\n");
	printf("Enter the Size of Array: \n");
	scanf("%d",&iSize);


	printf("___________________________\n");

	printf("Enter the Number:\n");
	scanf("%d",&iValue);

	Arr = (int *)malloc(iSize*sizeof(int));

	printf("___________________________\n");

	printf("Enter %d Elements\n",iSize);
	printf("___________________________\n");

	
	for(iCnt = 0 ;iCnt<iSize;iCnt++)
	{
		scanf("%d",&Arr[iCnt]);
	}
	printf("Enterd data is\n");

	printf("___________________________\n");
	
	for(iCnt = 0; iCnt<iSize;iCnt++)
	{
		printf("%d\t",Arr[iCnt]);
	}
	printf("\n");

	
	printf("___________________________\n");


	bRet = CheckNumber(Arr,iSize,iValue);

	if(bRet == true)
	{
		printf("Number is present\n");
	}
	else
	{
		printf("Number is not present\n");
	}

	printf("___________________________\n");

free(Arr);
return 0;
}