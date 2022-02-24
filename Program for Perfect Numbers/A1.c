#include<stdio.h>
#include<stdbool.h>



	



bool CheckPerfect( int iNumber)
{
	int iCnt=0;
	int iSum=0;


		if(iNumber<0)
	{
		iNumber=-iNumber;
	}
	
	for(iCnt=1;iCnt<=iNumber/2;iCnt++)
	{
		if((iNumber%iCnt)==0)
		{
			iSum=iSum+iCnt;

		}
	}

	
	if(iSum==iNumber)
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
	int iValue=0;
	bool bret=false;
	printf("Enter the numebr");
	scanf("%d",&iValue);
	bret=CheckPerfect(iValue);
	if(bret==true)
	{
		printf("It is a pefect number");
	}
	else
	{

		printf("It is Not a perfect  number");
	}

	return 0;
}