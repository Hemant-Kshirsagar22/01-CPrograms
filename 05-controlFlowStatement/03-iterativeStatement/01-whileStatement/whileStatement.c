#include <stdio.h>

int iterativeVariable = 0;
int numberOne = 0;

int main(void)
{
	printf("\n\nEnter How Many Want To Print \"Hello World !!!\" : ");
	scanf("%d",&numberOne);

	/*
		syntax of while statement

		while(<condition>)
		{
			// while body code

			// increment/decrement statement
		}

		while : in this statement while the condition is true the while block runs , And if the condition is false then the control is pass to the next statement.
		it is also entry control statement
	*/

	iterativeVariable = 1;

	printf("\n");

	while(iterativeVariable <= numberOne)
	{
		printf("Hello World !!!\n");

		iterativeVariable++;
	}

	return(0);
}

