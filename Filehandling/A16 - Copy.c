#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<io.h>
//abcde fghij klmno pqrst uvwxy z

int main()
{



	int fd = 0;
	char Arr[10] ={'\0'};

	fd = open("LB17.txt",O_RDWR);

	if(fd == -1)
	{
		printf("Unable to Open File\n");
		return -1;
	}
	else
	{
		printf("File Opend Sucessfully\n");
	}
	



	lseek(fd,10,2);
	read(fd," ",5);
	write(fd,"*",1);
	printf("\n");

	close(fd);

	return 0;

}