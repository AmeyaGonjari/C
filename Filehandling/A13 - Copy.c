#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<io.h>


int main()
{



	int fd = 0;
	char Arr[10] ={'\0'};

	fd = open("LB17.txt",O_RDWR);

	if(fd == -1)
	{
		printf("Unable to Open File\n");
	}
	else
	{
		printf("File Opend Sucessfully\n");
	}
	read(fd,Arr,5);

	printf("Data from file is %5s\n",Arr);

	write(1,Arr,5);

	close(fd);

	return 0;

}