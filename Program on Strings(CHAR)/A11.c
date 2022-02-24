#include<stdio.h>
#include<stdbool.h>
 
bool CheckSmall(char ch)
{
	if((ch>='a')&&(ch<='z'))
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
 	 
	bRet = CheckSmall(ch);
 	 	if(bRet == true)
 	 	{
 	 		printf("it is Small");
 	 	}
 	 	else
 	 	{
 	 		printf("IT is not Small\n");
 	 	}
 	 return 0;
}