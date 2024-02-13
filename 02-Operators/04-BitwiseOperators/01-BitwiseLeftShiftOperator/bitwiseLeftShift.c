#include <stdio.h>

int numberOne = 0;
int numberOfShifts = 0;

int result = 0;

int main(void)
{
	printf("Enter Number : ");
	scanf("%d",&numberOne);

	printf("Enter Number Of Left Shift : ");
	scanf("%d",&numberOfShifts);

/*
	in this operator the bits are shifted towords left by numberOfShift 

	ex 1 << 2
	 binary of 1 : 00000001 << 2
	   result    = 00000010 = 2
*/
	result = numberOne << numberOfShifts;

	printf("%d << %d = %d\n",numberOne,numberOfShifts,result);

	return(0);
}