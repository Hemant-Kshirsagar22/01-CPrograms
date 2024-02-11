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
		equal to operator takes two operands and check whether the operands are equal or not it returns 1 if the operands are equal and returns 0 if they are not equal.

		ex : 
			10 == 10 returns 1
			19 == 20 returns 0
	*/

	result = numberOne == numberTwo;

	printf(" %d == %d = %d\n",numberOne,numberTwo,result);

	return(0);
}