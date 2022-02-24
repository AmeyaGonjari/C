#include<stdio.h>


int CountFreqeuncy(char * Src , char CH)
{
	
	int iCount = 0;

		if(Src == NULL)
		{
			return -1;
		}

		while(*Src != '\0')
		{

			if (*Src == CH)
			
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
	char Cvalue = '\0';
	int iret = 0;
	
	printf("Enter the String :\n");
		scanf("%[^'\n']s",Arr);

		printf("Enter the Cvaluecter\n");
			scanf(" %c",&Cvalue);

			iret = CountFreqeuncy(Arr,Cvalue);
	 
	 			printf("Frequenc  is %d:\n",iret);

	 return 0;
}