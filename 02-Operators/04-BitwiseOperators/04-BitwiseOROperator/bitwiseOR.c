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
		bitwise OR follows logical OR truth table difference is it works on each byte of give operand

		ex : 5 | 3

			00000101 = 5
		  |
		  	00000011 = 3
		  	------------
		  	00000111 = 7

	*/
	result = numberOne | numberTwo;

	printf("%d | %d = %d\n",numberOne,numberTwo,result);

	return(0);
}
