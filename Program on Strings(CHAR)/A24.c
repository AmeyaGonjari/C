#include<stdio.h>
#include<stdbool.h>

bool CheckPalindrome(char * Src)
{
	bool flag = true;
	char * End = NULL;

		End = Src;
		
		while(*End != '\0')
		{
			End++;
		}

		End--;

		while(Src < End)
		{
			if(*Src != *End)
			{
				flag = false;
				break;
			}
			Src++;
			End--;
		}


	return flag;
}

int main()
{
	char Arr[50];
	bool bret = false;
	
	printf("Enter the String :\n");
		scanf("%[^'\n']s",Arr);


			bret = CheckPalindrome(Arr);

	 		if(bret == true)
	 		{
	 			printf("It is a Palindrome");
	 		}
	 		else
	 		{
	 			printf("It is not a palindrome");
	 		}

	 return 0;
}