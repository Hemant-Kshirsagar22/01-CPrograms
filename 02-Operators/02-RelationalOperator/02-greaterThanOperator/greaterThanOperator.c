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
		greater than operator takes two operands and check whether the first operand is greater than 2nd operand then it returns 1 else returns 0.

		ex : 
			10 > 1 returns 1
			19 > 20 returns 0
	*/

	result = numberOne > numberTwo;

	printf(" %d > %d = %d\n",numberOne,numberTwo,result);

	return(0);
}