#include <stdio.h>

int numberOne = 0;
int numberTwo = 0;

int result = 0;

int main(void)
{
	printf("Enter First Number : ");
	scanf("%d",&numberOne);

	printf("Enter Secnod Number : ");
	scanf("%d",&numberTwo);

/*
	Less than equal to operator check whether the first operand is Less Than or equal to 2nd operand is this condition true then it returns 1 else 0
*/
	result = numberOne <= numberTwo;

	printf("%d <= %d = %d",numberOne,numberTwo,result);

	return(0);
}