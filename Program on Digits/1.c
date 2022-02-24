
//REvenrse of number with filter
#include<stdio.h>
#include<stdbool.h>


 bool Palindrome(int iNo)
 {
 	int iDigit=0;
 	int iRev=0;
 	int iTemp=iNo;

 	




 	while(iNo!=0)
 	{
 		iDigit=iNo%10;
 
 		iRev=(iRev*10)+iDigit;
 		
 		iNo=iNo/10;

 	}
 	if(iRev == iTemp)
 		{
 			return true;
 		}
 		else
 		{
 			return false;
 		}


 }
int main()
 
	 {
 		auto int iValue = 0;
 		bool  iRev = false;
 	
 		printf("Enter the number::");
 		scanf("%d",&iValue);

 		iRev=Palindrome(iValue);

 		if(iRev == true)
 		{

 			printf("number is pindrome");
 		}
 		else
 		{
 			printf("number is not  pindrome");
 		}	
 		
	return 0;
 	}