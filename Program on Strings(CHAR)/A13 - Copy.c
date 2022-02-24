#include<stdio.h>
#include<stdbool.h>
 
char SmalltoCapital(char ch)
{
	if((ch>='a')&&(ch<='z'))
	{
		return ch  - 32;
	}
}

 int main()
 {
 	char  ch ='\0';
 	char cRet = '\0';
 	 printf("Enter character\n");
 	 
 	 scanf("%c",&ch);
 	 
	cRet = SmalltoCapital(ch);
 	 printf("Capital  letter is %c\n",cRet);


 	 return 0;
}