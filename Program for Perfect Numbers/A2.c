#include<stdio.h>


 int Display(int iNo)
{
	int iCnt=0;
	int iTable=0;
	if(iNo==0)
	{
		return 0;
	}
	for(iCnt=1;iCnt<=10;iCnt++)
	{
		iTable=iNo*iCnt;

		printf("%d * %d = %d\n",iNo,iCnt,iTable);
	}
	
}

int main()
{
	int iValue=0;
	printf("ENter the number");
	scanf("%d",&iValue);
	Display(iValue);
	return 0;
}