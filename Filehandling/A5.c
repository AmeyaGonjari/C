#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>
int main()
{	


	int fd = 0;
	int iRet = 0;
	char Fname[30];
	char Data[]="Marvellous Infosystems";

	printf("Enter file Name:\n");
	scanf("%s",Fname);
	
	fd = open(Fname,O_RDWR);

	if(fd == -1)
	{
		printf("Unable to open the file\n");
	
	return -1;
	}
	else
	{

		printf("File  Succesfully Opened with FD : %d\n",fd);
	}

	iRet = write(fd,Data,10);
	printf("%d bytes gets Succesfully Written in the file\n",iRet);


	return 0;
}





