#include <stdio.h>

int numberOne = 0;
int numberTwo = 0;

int result = 0;

int main(void)
{
	printf("Enter First Number : ");
	scanf("%d",&numberOne);

	printf("Enter Second Number : ");
	scanf("%d",&numberTwo);

/*
	Truth table of AND :
	
 	 INPUT  |OUTPUT
	-------------
	| 0 | 0 | 0 |
	-------------
	| 0 | 1 | 1 |
	-------------
	| 1 | 0 | 1 |
	-------------
	| 1 | 1 | 1 |
	-------------
	
	Logical And follows the above truth table at place of 1 any non zero number is allowed at input side

	ex :
		0 || 0 = 0
		0 || 1 = 1
		1 || 1 = 1
*/

	result = numberOne || numberTwo;

	printf("%d || %d = %d\n",numberOne,numberTwo,result);

	return(0);
}
