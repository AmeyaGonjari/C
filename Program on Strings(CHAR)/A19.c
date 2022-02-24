#include<stdio.h>
#include<stdbool.h>

int Spacecount(char * ch)
{
	int iCnt = 0;

	while(*ch!='\0')
	{
		if(*ch == ' ')
		{
			iCnt++;	
		}
	
		ch++;
	}
	
	return iCnt;
}

 int main()
 {
 	char Arr[50];
 	int iRet = '\0';
 	 printf("Enter String\n");
 	 scanf("%[^'\n']s",Arr);
 	 
	iRet = Spacecount(Arr);
 	 printf("space count is %d\n",iRet);


 	 return 0;
}