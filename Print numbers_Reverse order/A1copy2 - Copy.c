//reverse order
#include<stdio.h>
void Display(int iNo)
{
	int iCnt=0;
	if(iNo==0)
			{
			printf("the enterd number is 0");

			}

	if(iNo<0)
			{
				iNo=-iNo;
			}

	for(iCnt=iNo;iCnt>=1;iCnt--)
			{

			printf("%d\n",iCnt);
			
			}
}
int main()
{
	int iValue=0;
	printf("Enter the number:");
	scanf("%d",&iValue);
	Display(iValue);
	return 0;
}