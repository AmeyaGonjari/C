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
	char Buffer[1024];                                      //mug
 
	printf("Enter file Name:\n");
	scanf("%s",Fname);
	
	fd = open(Fname,O_RDONLY);

	if(fd == -1)
	{
		printf("Unable to open the file\n");
	
	return -1;
	}
	else
	{

		printf("File  Succesfully Opened with FD : %d\n",fd);
	}
	printf("Data From file is:\n");

	while((iRet= read(fd , Buffer,sizeof(Buffer)))!= 0)
	{
		write(1,Buffer,iRet);
	}

	

	close(fd);

	return 0;
}

