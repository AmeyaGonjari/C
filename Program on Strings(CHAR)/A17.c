#include<stdio.h>
#include<stdbool.h>

int Difference(char * ch)
{
	int SCount = 0,CCount=0,iDiff= 0;;
	while(*ch!='\0')
	{
		if((*ch>='a')&&(*ch<='z'))
		{
			SCount++;	
		}
		else if((*ch>='A')&&(*ch<='Z'))
		{
			CCount++;	
		}
		ch++;
	}
	
	iDiff = SCount-CCount;

	if(iDiff<0)
	{
		iDiff = -iDiff;
	}
	return iDiff;
}

 int main()
 {
 	char Arr[50];
 	int iRet = '\0';
 	 printf("Enter String\n");
 	 scanf("%[^'\n']s",Arr);
 	 
	iRet = Difference(Arr);
 	 printf("count of Small is %d\n",iRet);


 	 return 0;
}