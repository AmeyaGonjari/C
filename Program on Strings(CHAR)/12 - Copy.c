#include<stdio.h>
#include<stdbool.h>
 
bool CheckDigit(char ch)
{
	if((ch>='0')&&(ch<='9'))
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
 	char  ch ='\0';
 	bool bRet = false;
 	 printf("Enter character\n");
 	 
 	 scanf("%c",&ch);
 	 
	bRet = CheckDigit(ch);
 	 	if(bRet == true)
 	 	{
 	 		printf("it is Digit");
 	 	}
 	 	else
 	 	{
 	 		printf("IT is not Digit\n");
 	 	}
 	 return 0;
}