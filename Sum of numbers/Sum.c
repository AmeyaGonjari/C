//reverse order
#include<stdio.h>
int Addition (int iNo)
{
	int iCnt=0;
	int iSum=0;



	for(iCnt=1;iCnt<=iNo;iCnt++)
			{

			iSum=iSum+iCnt;
			}
	return iSum;
		
}
int main()
{
	int iValue=0;
	int iret=0;
	printf("Enter the number:");
	scanf("%d",&iValue);
	 iret=Addition(iValue);
	 printf(" Addition is: %d",iret);
	return 0;
}