#include<stdio.h>
#include<stdlib.h>


int Max(int * ptr,int iNo)
{
	int i = 0;
	int imax = *ptr;

	for(i = 0; i<iNo ; i++)
	{
		if(*ptr > imax)
		{
			imax = *ptr;

		}

		*ptr++;
	}

	return imax;

}

int main()
{
	int iValue = 0;
	int * arr = NULL;
	int  i = 0;
	int iRet = 0;

	printf("Enter the Number of elements: \n");
	scanf("%d",&iValue);

	printf("Enter the elements:\n");

	arr = (int*)malloc(sizeof(iValue)*sizeof(int));

	for(i = 0 ;i < iValue;i++)
	{
		scanf("%d",&arr[i]);
	}


	iRet = Max(arr,iValue);

printf("%d\n",iRet );

	free(arr);
	return 0;
}