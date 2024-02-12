#include<stdio.h>
int numberTwo = 1;
int numberOne = 0;
int result;
int main(void)
{
	printf("Truth table Logical OR\n");
	printf("-----------------------------------\n");
	result = numberOne || numberOne;
	printf("|     %d     |      %d     |   %d    |\n",numberOne,numberOne,result);
	result = numberOne || numberTwo;
	printf("|     %d     |      %d     |   %d    |\n",numberOne,numberTwo,result);
	result = numberTwo || numberOne;
	printf("|     %d     |      %d     |   %d    |\n",numberTwo,numberOne,result);
	result = numberTwo || numberTwo;
	printf("|     %d     |      %d     |   %d    |\n",numberTwo,numberTwo,result);
	printf("-----------------------------------\n");
	return(0);
}
