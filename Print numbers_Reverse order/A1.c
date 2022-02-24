//display 1 to 5 on screen
#include<stdio.h>

void Display(int iNo)
{
	int iCnt=0;
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("%d\n",iCnt);
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