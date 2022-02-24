#include<stdio.h>
void Display(char * p)
{

	while( *p != '\0'  )
	{
		printf("%c\n",*p);
		p++;
	}

}
int main()
{
	char Arr[50];


	printf("Enter your name \n");
	scanf("%[^'\n']s",Arr);
	

	Display(Arr);
	return 0;
}