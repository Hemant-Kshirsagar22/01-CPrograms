#include<stdio.h>
int numberOne = 0;
int numberTwo = 1;
int result;
int main(void)
{
	printf("Truth Table of Logical AND\n");
	printf("----------------------------------\n");
	printf("| Oprator 1 | Oprator 2 | Result |\n");
	result = numberOne && numberTwo;
	printf("|     %d     |      %d    |   %d    |\n",numberOne,numberOne,result);
	result = numberOne && numberTwo;
	printf("|     %d     |      %d    |   %d    |\n",numberOne,numberTwo,result);
	result = numberTwo && numberOne;
	printf("|     %d     |      %d    |   %d    |\n",numberTwo,numberOne,result);
	result = numberTwo && numberTwo;
	printf("|     %d     |      %d    |   %d    |\n",numberTwo,numberTwo,result);
	printf("----------------------------------\n");
	return(0);
}
