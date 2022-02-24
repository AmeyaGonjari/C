#include<stdio.h>

void StrRev(char * start)
{
	char * End = start;
	char Temp = '\0';
	
	while( *End != '\0')
	{
		End++;
	}
	End--;

	while(start <= End)
	{
		Temp = *start;
		*start = *End;
		*End = Temp;

		start++;
		End--;
	}

} 

int main()
{
	char Arr[50];
	
		printf("Enter the String :\n");
		scanf("%[^'\n']s",Arr);

		StrRev(Arr);

		printf("Reverse String is :%s",Arr);
		
		return 0;
}