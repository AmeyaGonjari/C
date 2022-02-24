///count digits of the number

#include<stdio.h>

int CountDisplay(int);

int main()
{
	int iValue=0;
	int iRet=0;

	printf("Enter the number::\n");
	scanf("%d",&iValue);

	 	iRet = CountDisplay(iValue);
		printf(" Count digits are::%d",iRet);

	
	return 0;

}

int CountDisplay(int iNo)
{

	int iDigit = 10;
	int iSum=0;
	int iCnt=0;

	if(iNo<0)
	{
		iNo=-iNo;   //updater

	}
	if (iNo==0)
	{
		return 1;
	}




	while(iNo>0)
	{
		iDigit = iNo % 10;

		iCnt++;
		
		iNo=iNo / 10;


	}

		return iCnt;

}

