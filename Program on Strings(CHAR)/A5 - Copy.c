#include<stdio.h>
void Display(char * p)
{
printf("%c\n",*p);
p++;
printf("%c\n",*p);
p++;
printf("%c\n",*p);
p++;
printf("%c\n",*p);
p++;
printf("%c\n",*p);

}
int main()
{
	char Arr[50];


	printf("Enter your name \n");
	scanf("%[^'\n']s",Arr);
	

	Display(Arr);
	return 0;
}