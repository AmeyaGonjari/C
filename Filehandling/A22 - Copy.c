#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<io.h>

int main()
{

	int fd = 0,iSum = 0,iRet = 0,i = 0;
	
	char fname[20];

	char cBuffer[1024];

	printf("Enter the File Name:\n\n");
	scanf("%s",fname);

	fd = open(fname,O_RDWR);

	if(fd == -1)
	{
		printf("Unable to open the file\n");
		return -1;
	}	
	else
	{
		printf("File open Sucessfully\n");
	}

/*
	while((iRet = read(fd,cBuffer,10))!=0)
	{
		
			iSum = iSum+iRet;
	}
*/
	iRet = lseek(fd,0,2);

	printf("File Size is :%d\n",iRet);



	close(fd);
	return 0;

}