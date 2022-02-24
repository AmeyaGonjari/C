#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

bool CheckBit(UINT iNo,UINT iPose)
{
	UINT iMask = 0x00000001;
	UINT iResult = 0;

	iMask = iMask <<(iPose -1);

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
	UINT iBit = 0;
	bool bret = false;
	
	printf("Enter the number\n");
	scanf("%d",&a);

	printf("Enter the Position\n");
	scanf("%d",&iBit);

	bret = CheckBit(a,iBit);
	if(bret == true)
	{

		printf("%d bit is ON\n",iBit);
	}
	else
	{

		printf("%d Bit is OFF\n",iBit);
	}
	return 0;
}