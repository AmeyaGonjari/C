// take N numbers and return  diff  between  Maximum  & Minimun Number (number is + or - )
#include<stdio.h>
#include<stdlib.h>


int Diffrence(int * p,int iLength)
{
	int iCnt = 0;
	int iCount = 0;
	int iMax = *p;
	int iMin = *p;

	for(iCnt = 0 ;iCnt<iLength;iCnt++ )
	{
	
		if(*p > iMax)
		{
		
			iMax = *p;
		
		}
		if (*p < iMin)

		{
			iMin = *p;
		}


		*p++;
	}
	
	return iMax-iMin;

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

	

	iRet = Diffrence(Arr,iSize);

	printf("Diffrence  is : %d",iRet);

free(Arr);
return 0;
}