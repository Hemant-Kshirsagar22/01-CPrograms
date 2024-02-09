#include <stdio.h>

int numberOne = 0;

int main(void)
{
	printf("\n\nEnter Number : ");
	scanf("%d",&numberOne);

	/*
		Syntax of if-else-if-else or if-else-if-ladder

		if(<expression/condition>)
		{
			
		}
		else if(<expression/condition>)
		{
	
		}
		:
		:   // here we can write n number of else if hence it is called as if else if ladder
		:
		else
		{
	
		}

		if-else-if-else : In this statement if the expression or condition is true then the control is given to that if body , else if the condition or expression is false then the control will given to else body.

	*/
	
	if(numberOne > 0)
	{
		printf("\n\n%d is positive !!!\n\n",numberOne);
	}
	else if(numberOne < 0)
	{
		printf("\n\n%d is negative !!!\n\n",numberOne);
	}
	else
	{
		printf("\n\n%d is zero !!!",numberOne);
	}

	return(0);
}
