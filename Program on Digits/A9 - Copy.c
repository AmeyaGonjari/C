#include<stdio.h>
#include<stdbool.h>
int Reverse(int iValue)
{
	int iDigit=0;

	int iSum =0;

	while(iValue!=0)
	{
		iDigit=iValue%10;

		iSum=(iSum*10)+iDigit;

		iValue=iValue/10;

	}
		return iSum ;
}

bool checkpalindrome(int iNo)
{
	int iTemp=iNo;
	int iRev=Reverse(iNo) ;
	if(iRev==iTemp)
	{
		return true;

	}
	else
	{
		return false;
	}
}

int main()
{
	int iNo1=0;

    int bret = false;                 

    printf("Enter the Number::\n");
    scanf("%d",&iNo1);
    
    bret = checkpalindrome(iNo1);
    if(bret==true)
    {
    	printf("it is a palindrome");

    }
    else
    {
    	printf("it is not a palindrome");
    }
return 0;
}
