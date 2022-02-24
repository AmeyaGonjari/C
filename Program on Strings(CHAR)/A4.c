#include<stdio.h>
void Display(char * p)
{

	printf("Your Enterd name  is %s\n",p);

}
int main()
{
	char Arr[50];


	printf("Enter your name \n");
	scanf("%[^'\n']s",Arr);
	

	Display(Arr);
	return 0;
}