#include<stdio.h>
int main()
{
	int iValue = 0;
	printf("Enter the number\n");
	scanf("%d",&iValue);

	printf("It is a hexadecimal format : %x\n",iValue);
	printf("It is a decimal format : %d\n",iValue);
	printf("It is a Octal format : %O\n",iValue);

	return 0;
}