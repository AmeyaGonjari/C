#include<stdio.h>
#include<stdbool.h>

void Count(char * ch)
{
	int iCount1 = 0,iCount2=0,iDiff= 0;;
	while(*ch!='\0')
	{
		if((*ch>='a')&&(*ch<='z'))
		{
			iCount1++;	
		}
			else if((*ch>='A')&&(*ch<='Z'))
			{
				iCount2++;	
			}
		ch++;
	}
	printf("Small Letters are::%d\n",iCount1);
	printf("Captila Letters are::%d\n",iCount2);


}

 int main()
 {
 	char Arr[50];
 	
 	 printf("Enter String\n");
 	 scanf("%[^'\n']s",Arr);
 	 
	 Count(Arr);
 	


 	 return 0;
}