#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT ;
	

bool CheckBit(UINT iNo)
{
	UINT Mask = 0x00100000;
	UINT iResult = 0;

	iResult = iNo & Mask;
	if(iResult == Mask)
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
	UINT  iValue = 0;
	 bool bret = false;

	 printf("Enter the Number\n");
	 scanf("%d",&iValue);

	 bret = CheckBit(iValue);

	 if(bret == true)
	 {
	 	printf("15th bit is on\n");
	 }
	 else
	 {
	 	printf("15th bit is OFF \n");
	 }


	 return 0;
}