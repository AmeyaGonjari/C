
#include<stdio.h>

void Display(int iNo)
{

	int iCnt=0;
	if(iNo<0)
	{
 		iNo=-iNo;
	}
	if(iNo==0)
	{
		printf("your enter number is 0\n");
		return;
	}
		for(iCnt=1;iCnt<=iNo;iCnt++)
		{
			printf("%d\t",iCnt);
		}
}
int main()
{
	int iValue=0;

		printf("Enter the value:");
		scanf("%d",&iValue);

		 Display(iValue);   //Funtion Call


	return 0;

}