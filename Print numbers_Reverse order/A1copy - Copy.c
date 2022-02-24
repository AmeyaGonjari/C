//display 1 to 5 on screen
#include<stdio.h>

void Display(int iNo)
{
	int iCnt=0;
	do
	{
		printf("%d\n",iCnt);
		iCnt++;
	}while(iCnt>=iNo);
}
int main()
{
	int iValue=0;

		printf("Enter the value:");
		scanf("%d",&iValue);

		 Display(iValue);   //Funtion Call


	return 0;

}