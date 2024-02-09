#include <stdio.h>

int numberOne = 0;

int main(void)
{
	printf("Enter Number : ");
	scanf("%d",&numberOne);

	/* 
		syntax of if-else if

		if(<expression/condition>)
		{
			// if body
		}
		else if(<expression/condition>)
		{
			// else if body
		}

		if-else if : In this statement if the expression or condition is true then the control is given to that if body else if the condition or expression is false then the control will not given to that if body.
	*/
	
	if(numberOne == 0)
	{
		printf("\n\n%d is zero !!!\n\n",numberOne);
	}
	else if(numberOne > 0)
	{
		printf("\n\n%d is positive !!!\n\n",numberOne);
	}
	else if(numberOne < 0)
	{
		printf("\n\n%d is negative !!!\n\n",numberOne);
	}

	return(0);
}