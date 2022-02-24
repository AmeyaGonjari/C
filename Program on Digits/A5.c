
//count number of Even digits
#include<stdio.h>

int CountEven(int iNo)
{
int iCnt=0;
int idigit=0;

if(iNo<0)
{
	iNo=-iNo;
}
if(iNo==0)
{
return 1;
}

	 
	 while(iNo!=0)
	 {
	 	idigit=iNo%10;
	 	
	 	if((idigit%2)==0)
	 		{
	 			iCnt++;
	 		}
	 
	 		iNo=iNo/10;

	 	


	}

	 			 return iCnt;
}

int main()
{
int iValue=0;
int iRet=0;

	 	printf("Enter the number ");
	 	scanf("%d",&iValue);
	 	iRet=CountEven(iValue);
		printf(" Even Count is::::%d",iRet);
	 	return 0;
}