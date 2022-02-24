#include<stdio.h>


 int Power(int X,int Y)
{
	int iCnt=0;
	int iPower=1;



	if(X<0)
	{
		X=-X;
	}

	if(Y<0)
	{

		Y=-Y;
	}
	
	for(iCnt=1;iCnt<=Y;iCnt++)
	{
		
		iPower= iPower * X;

	
	}
		printf("%d",iPower );
	
}

int main()
{
	int X =0;
	int Y = 0;

	printf("ENter the numbers");
	scanf("%d %d",&X,&Y);
	Power(X,Y);
	return 0;
}