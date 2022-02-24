#include<stdio.h>


int CountVowel(char * Src)
{
	int iCount = 0;

	if(Src == NULL)
	{

		return -1;
	}

	while(*Src != '\0')
	{
		if((*Src == 'a')||(*Src == 'e')||(*Src == 'i')||(*Src == 'o')||(*Src == 'u')||(*Src == 'A')||(*Src == 'E')||(*Src == 'I')||(*Src == 'O')||(*Src == 'U'))
		{
			iCount++;

		}

		Src++;
	}

	return iCount;
}

int main()
{
	char Arr[50];
	int iret = 0;
	
	printf("Enter the String :\n");
		scanf("%[^'\n']s",Arr);

	iret = CountVowel(Arr);
	 
	 printf("Count of Vowel is %d:\n",iret);

	 return 0;
}