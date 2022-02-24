#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<io.h>


int main()
{



	int fd = 0;
	char Arr[]="hello";

	fd = open("LB17.txt",O_RDWR | O_APPEND);

	if(fd == -1)
	{
		printf("Unable to Open File\n");
	}
	else
	{
		printf("File Opend Sucessfully\n");
	}
	write(fd,Arr,5);

	close(fd);

}