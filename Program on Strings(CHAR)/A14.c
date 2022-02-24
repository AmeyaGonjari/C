#include<stdio.h>
#include<stdbool.h>
 
char CapitaltoSmall(char ch)
{
	if((ch>='A')&&(ch<='Z'))
	{
		return ch  + 32;
	}
}

 int main()
 {
 	char  ch ='\0';
 	char cRet = '\0';
 	 printf("Enter character\n");
 	 
 	 scanf("%c",&ch);
 	 
	cRet = CapitaltoSmall(ch);
 	 printf("Small  letter is %c\n",cRet);


 	 return 0;
}