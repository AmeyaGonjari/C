#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>
int main()
{

	int fSource = 0;
	int iRet = 0;
	char Fname1[30];
	char Buffer[1024];



		printf("Enter the Source File:\n");
			scanf("%s",Fname1);


		fSource = open(Fname1,O_RDONLY);


		if(fSource == -1)
		{
 		printf("Unable to open File ");
		return -1;

		} 

		else
		{
		printf("File opened Succesfully: %d\n",fSource);
		}


		printf("Data from the file is:\n");

		while((iRet = read(fSource,Buffer,sizeof(Buffer))) != 0)
		{
	
		write(1,Buffer,iRet);

		}
}