
#include<stdio.h>

void Print(int iNo)
{
	int iCount=0;
  	for(iCount=1;iCount==iNo;iCount++)
  	{
  			printf("*\t");

  	}
}
int main()
{
	int iValue=0;


	 	 printf("Enter the Number:\n");
	 	 scanf("%d",&iValue);


		Print(iValue);
		
return 0;

}