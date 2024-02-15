#include <stdio.h>

unsigned char numberOne = 0;

unsigned char result = 0; // we take here unsigned char because we want 1 byte to easy to understand 

int main(void)
{

	printf("Enter First Number : ");
	scanf("%u",&numberOne);

	/*
		bitwise NOT follows logical NOT truth table difference is it works on each byte of give operand

		ex : ~0

			~00000000 = 11111111

			~5
			~00000101 = 11111010
		 
	*/
	result = ~numberOne;

	printf("~%d = %d\n",numberOne,result);

	return(0);
}
