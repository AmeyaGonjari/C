#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<io.h>

int main()
{

	int fd = 0,iCnt = 0,iRet = 0,i = 0;
	
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


	while((iRet = read(fd,cBuffer,10))!=0)
	{
		for(i = 0;i < iRet;i++)
		{
			if((cBuffer[i]=='a')||(cBuffer[i]=='e')||(cBuffer[i]=='i')||(cBuffer[i]=='o')||(cBuffer[i]=='u'))
			{
				iCnt++;
			}

		}
	}

	printf("Count of a is : %d\n",iCnt);

	close(fd);
	return 0;

}