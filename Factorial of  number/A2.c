//Factorial of number
#include<stdio.h>
typedef unsigned long int INT;
 INT Factorial (int iNo)
{
	int iCnt=0;
	INT  iFact=1;



	if(iNo < 0)
	{
		iNo=-iNo;
	}
	iCnt = 1;
	while(iCnt<=iNo)
	{
		iFact=iFact*iCnt;

		iCnt++;
	}
	return iFact;
/*	for(iCnt=1;iCnt<=iNo;iCnt++)
			{

			iFact=iFact*iCnt;
			
			}
	
	return iFact;
*/		
}
int main()
{
	int iValue=0;
	 INT iret=0;
			
			printf("Enter the number:");
			scanf("%d",&iValue);
	 
	 		iret = Factorial(iValue);
	 
	 		printf("!!!!!!** Factorial is: %ld **!!!!!!",iret);
	
	return 0;
}