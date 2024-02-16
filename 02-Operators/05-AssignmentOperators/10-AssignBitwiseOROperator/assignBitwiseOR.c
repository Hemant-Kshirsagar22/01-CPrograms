#include <stdio.h>

int numberOne = 0;
int numberTwo = 0;

int main(void)
{
	printf("Enter First Number : ");
	scanf("%d",&numberOne);

	printf("Enter Second Number : ");
	scanf("%d",&numberTwo);

	numberOne |= numberTwo;

/*
	Assign Bitwise OR is same like Bitwise OR difference is the result is stored in operand1

	ex = 
		numberOne |= numberTwo 
		i.e numberOne = numberOne | numberTwo
*/
	printf("numberOne = %d\n",numberOne);

	return(0);
}
