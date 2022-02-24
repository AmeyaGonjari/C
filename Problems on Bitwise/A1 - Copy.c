#include<stdio.h>
void Binary(int iNo)
{
	int iNumber = 0;
	while(iNo != 0)
	{
		iNumber = iNo%2;
		printf("%d\n",iNumber);
		iNo = iNo/2;
	}
}
int main()
{
	int iValue = 0;
	 

	 printf("Enter the number :\n");
	 scanf("%d",&iValue);

	 Binary(iValue);
	return 0;
}