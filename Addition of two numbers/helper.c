///////////////////////////////////////////
//
//Function name: 	Addition
//Input:  			Integer,Integer
//Output: 			Integer
//Description:		It is used to add two numbers
//Author:			Ameya Milind Gonjari
//Date:				31/08/2021
//
///////////////////////////////////////////

/*
 Algorithm
?'
+'
 START

  		Accept  first number as No1
  		Accept  seconf  number as No2
  		Perfrom Addition  of No1,No2
  		Store  the result in RET
  		Return the value of RET
  
  STOP

*/
#include"header.h"
int Addition(
				int iNo1,     // First input Argument
				int iNo2      // Second input Argument
			)
{
	int iResult=0;            // Local variable to store

	iResult=iNo1+iNo2;

	return iResult;           // Return the value to the caller

}