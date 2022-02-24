//Input : 6

//OUTPUT : * # * # * # 


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
		if(iCnt%2!=0)
		{
			printf("*\t");
		}
		else
		{
			printf("#\t");
		}
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