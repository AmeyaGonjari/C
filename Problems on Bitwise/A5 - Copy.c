#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
	UINT iMask = 0x0000840;

	UINT iResult = 0;

 iResult = iNo & iMask;

	if(iResult == iMask)
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
	UINT a = 0;
	bool bret = false;
	
	printf("Enter the number\n");
	scanf("%d",&a);

	bret = CheckBit(a);
	if(bret == true)
	{

		printf("7th & 12th bit is ON\n");
	}
	else
	{

		printf("7th  & 12th Bit is OFF\n");
	}
	return 0;
}