//Input : 6
//OUTPUT :  a b c d e f

#include<stdio.h>

void Display(int iNo)
{
	int iCnt = 0;
	char ch = '\0'; 
	
	if(iNo<0)
	{
		iNo = -iNo;
	}
	for(iCnt = 1,ch = 'a';iCnt<=iNo;iCnt++,ch++)
	{

		printf("%c\t",ch);

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