// take N numbers and return  count of even numbers 

#include<stdio.h>
#include<stdlib.h>


int CountEven(int * p,int iLength)
{
	int iCnt = 0;
	int iCount = 0;
	float Average = 0.0f;
	for(iCnt = 0 ;iCnt<iLength;iCnt++ )
	{

		if((*p)%2==0)
		{
			iCount++;
		}

		*p++;
	}
	
	return iCount;

}




int main()
{
	int iSize = 0;
	int  * Arr = NULL;
	int iCnt = 0;
	int  iRet = 0;
	printf("Enter the Size of Array: \n");
	scanf("%d",&iSize);

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

	

	iRet = CountEven(Arr,iSize);

	printf("Count of Even numbers is : %d",iRet);

free(Arr);
return 0;
}