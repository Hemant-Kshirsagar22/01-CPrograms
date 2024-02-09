#include <stdio.h>

int iterativeVariable = 0;
int numberOne = 0;

int main(void)
{
	printf("Enter How Many Times You want to print \"Hello World !!!\" : ");
	scanf("%d",&numberOne);

	/*
		syntax of do-while 

		do
		{
			// do while body

			// increment/decrement statement
		}while(<condition>);

		do-while statement : In this statement atleast one time do-while body runs and then the condition is check if the condition is true then the do-while body runs untill the condition is becomes false
		
	*/

	iterativeVariable = 1;

	printf("\n");

	do
	{
		printf("Hello World !!!\n");

		iterativeVariable++;
	}while(iterativeVariable <= numberOne);


	return(0);
}
