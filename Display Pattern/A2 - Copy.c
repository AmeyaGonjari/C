//Input : 5
//OUTPUT :  2 4 6 8 10

#include<stdio.h>

void Display(int iNo)
{
	int iCnt = 0;
	if(iNo<0)
	{
		iNo = -iNo;
	}
	for(iCnt = 1;iCnt<=iNo;iCnt++)
	{

		printf("%d\t",iCnt*2);
	}
}

int main()
{
	int iValue = 0;

	printf("Enter the Number\n");
	scanf("%d",&iValue);

	Display(iValue);

	return 0;
}