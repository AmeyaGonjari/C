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
	char Data[7];

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

	iRet = read(fd,Data,6);

	printf("%d bytes gets Succesfully Read from the file\n",iRet);

	printf("Data from the File:");

	
	write(1,Data,iRet);

	close(fd);

	return 0;
}

