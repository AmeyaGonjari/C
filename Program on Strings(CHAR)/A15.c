#include<stdio.h>
#include<stdbool.h>
 
char CharToggle(char ch)
{
	if((ch>='a')&&(ch<='z'))
	{
		return ch  - 32;
	}
	else if((ch>='A')&&(ch<='Z'))
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
 	 
	cRet = CharToggle(ch);
 	 printf("Toggled   letter is %c\n",cRet);


 	 return 0;
}