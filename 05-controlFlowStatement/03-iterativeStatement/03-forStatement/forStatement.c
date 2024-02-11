#include <stdio.h>

int numberOne = 0;
int iterativeVariable = 0;

int main(void)
{
	printf("Enter How Many Times You Want To Print \"Hello World !!!\" : ");
	scanf("%d",&numberOne);

	printf("\n");

	/*
		syntax of for loop
			
		for(<initilization of iterative variable>; <condition> ; <increment/decrement>)
		{
			// for body
		}

		working :
			// step 1                          step 2            		step 4	
		for(iterativeVariable = 1; iterativeVariable <= numberOne;iterativeVariable++)
		{
			// step 3
			printf("Hello World !!!\n");
		}
		
	*/


	for(iterativeVariable = 1; iterativeVariable <= numberOne;iterativeVariable++)
	{
		printf("Hello World !!!\n");
	}

	return(0);
}
