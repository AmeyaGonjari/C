//program on digits using iteration

#include<stdio.h>
void Display(int iNo)
{
	int iDigit=10;

	while(iNo>0)
	{

		iDigit=iNo % 10;
		printf("%d\t",iDigit);
		iNo=iNo/10;

	}
}
int main()
{
	int iValue=0;
	printf("Enter the number ::");
	scanf("%d",&iValue);

	Display(iValue);



	return 0;
}