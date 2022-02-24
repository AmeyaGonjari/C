
//REvenrse of number with filter
#include<stdio.h>
 int Reverse(int iNo)
 {
 	int iDigit=0;
 	int iRev=0;

 	if(iNo < 0)
 	{
 		iNo = -iNo;
 	}

 	while(iNo>0)
 	{
 		iDigit=iNo%10;

 		iRev=(iRev*10)+iDigit;
 		
 		iNo=iNo/10;
 	}
 		return iRev;

 }
int main()
 
	 {
 		int iValue = 0;
 		int iRev = 0;
 	
 		printf("Enter the number::");
 		scanf("%d",&iValue);

 		iRev=Reverse(iValue);

 		printf("Reverse of number is:::%d",iRev);
	
	

	return 0;
 	}