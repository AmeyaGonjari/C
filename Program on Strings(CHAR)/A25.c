
#include<stdio.h>
#include<stdbool.h>

char CheckPalindrome(char * Src)
{
	
}

int main()
{
	char Arr[50];
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
h\		printf("Enter the String :\n");
		scanf("%[^'\n']s",Arr);




	 return 0;
}