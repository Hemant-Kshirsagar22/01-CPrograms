#include <stdio.h>

int numberOne = 0;

int main(void)
{
	printf("\n\nEnter Number : ");
	scanf("%d",&numberOne);
	
	/*
		syntax of if-else statement

		if(<expression/condition>)
		{
			// if body
		}
		else
		{
			// else body
		}

		In this statement if the condition or expression is true then the control is given to the if body , If the condition or expression is false then the control will not given to the else body
	*/

	if(numberOne > 5)
	{
		printf("\n\n%d is grater than 5 !!!\n\n",numberOne);
	}
	else
	{
		printf("\n\n%d is less than or equal to 5 !!!\n\n",numberOne);
	}
	return(0);
}
