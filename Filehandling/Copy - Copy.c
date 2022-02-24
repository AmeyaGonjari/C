#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>
int main()
{	


	int fdSrc = 0 ,fdDest = 0;
	int iRet = 0;
	char Fname[30];
	char Fname1[30];
	char Buffer[1024];                                      //mug

	printf("Enter  Source file Name:\n");
	scanf("%s",Fname);

	fdSrc = open(Fname,O_RDONLY);

	if(fdSrc == -1)
	{
		printf("Unable to open the file\n");
	
	return -1;
	}
	else
	{

		printf("File  Succesfully Opened with FD : %d\n",fdSrc);
	}

	

	printf("Enter  Destination file Name:\n");
	scanf("%s",Fname1);
	
	fdDest = creat(Fname1,0777);	


	printf("Data From file is:\n");

	while((iRet= read(fdSrc,Buffer,sizeof(Buffer)))!= 0)
	{
		write(fdDest,Buffer,iRet);
	}


	close(fdSrc);
	close(fdDest);

	return 0;
}

