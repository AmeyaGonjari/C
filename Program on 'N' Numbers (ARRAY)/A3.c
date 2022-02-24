// take N numbers and return  Average of numbers

#include<stdio.h>
#include<stdlib.h>


float Average(int * p,int iLength)
{
	int iCnt = 0;
	int iSum = 0;
	float Average = 0.0f;
	for(iCnt = 0 ;iCnt<iLength;iCnt++ )
	{
		iSum = iSum + *p;
		*p++;
	}
	

	Average = (float)iSum/(float)iLength;

	return Average;

}




int main()
{
	int iSize = 0;
	int  * Arr = NULL;
	int iCnt = 0;
	float  fRet = 0.0f;
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

	

	fRet = Average(Arr,iSize);

	printf("Average of N numbers is : %.2f",fRet);

free(Arr);
return 0;
}