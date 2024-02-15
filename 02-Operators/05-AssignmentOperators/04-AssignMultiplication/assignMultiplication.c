#include <stdio.h>

int numberOne = 0;
int numberTwo = 0;

int main(void)
{
	printf("Enter First Number : ");
	scanf("%d",&numberOne);

	printf("Enter Second Number : ");
	scanf("%d",&numberTwo);

	/*
		Assign Multiplication operator is also called as shorthand operator

		syntax :

		operand 1 *= operand 2

		it resolves internally is operand 1 = operand 1 * operand 2

		it overrides value of opernad 1 by the result of Multiplication of operand 1 and operand 2
	*/

	numberOne *= numberTwo;

	printf("Multiplication = %d\n",numberOne);

	return(0);
}
