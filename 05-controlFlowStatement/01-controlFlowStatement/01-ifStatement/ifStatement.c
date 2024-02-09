#include <stdio.h>

int numberOne = 0;

int main(void)
{
	printf("\n\nEnter Number : ");
	scanf("%d",&numberOne);

	/*
		syntax of if statement

		if(<expression/condition>)
		{
			// if body
		}

		In this statement if the condition or expression is true then the control is given to the if body , If the condition or expression is false then the control will not given to the if body
	*/
	if(numberOne > 0)
	{
		printf("\n\n%d is positive !!!\n\n",numberOne);
	}

	if(numberOne < 0)
	{
		printf("\n\n%d is negative !!!\n\n",numberOne);
	}

	if(numberOne == 0)
	{
		printf("\n\n%d is zero !!!\n\n",numberOne);
	}

	return(0);
}
