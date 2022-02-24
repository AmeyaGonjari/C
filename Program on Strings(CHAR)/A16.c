#include<stdio.h>
#include<stdbool.h>
 
int SmallCount(char * ch)
{
	int iCount = 0;
	while(*ch!='\0')
	{
		if((*ch>='a')&&(*ch<='z'))
		{
			iCount++;	
		}
		ch++;
	}
	return iCount;
}

 int main()
 {
 	char Arr[50];
 	int iRet = '\0';
 	 printf("Enter String\n");
 	 scanf("%[^'\n']s",Arr);
 	 
	iRet = SmallCount(Arr);
 	 printf("count of Small is %d\n",iRet);


 	 return 0;
}