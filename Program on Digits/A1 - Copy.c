//program on Digit using sequence

#include<stdio.h> 	

void Display()
{
	int iNo = 7521;
	int iDigit = 0;

		iDigit = iNo % 10;        // 1
		printf("%d\t",iDigit);
		iNo=iNo/10;             // 752

		iDigit=iNo % 10;		// 2		
		printf("%d\t",iDigit);
		iNo=iNo/10;				// 75

		iDigit = iNo % 10;		// 5
		printf("%d\t",iDigit);
		iNo= iNo / 10; 			// 7

		iDigit = iNo % 10;		//7
		printf("%d\t",iDigit);
		iNo=iNo / 10;			// 0

}

int main()
{

	Display();
	return 0;
}