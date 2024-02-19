#include <stdio.h>

int numberOne = 0;
int numberTwo = 0;

int main(void)
{

	printf("\n\n");

	for(numberOne = 1;numberOne <= 3;numberOne++)
	{
		for(numberTwo = 1; numberTwo <= numberOne;numberTwo++)
		{
			printf("*");
		}
		printf("\n");
	}

	for(numberOne = 2; numberOne >= 1; numberOne--)
	{
		for(numberTwo = 1; numberTwo <= numberOne;numberTwo++)
		{
			printf("*");
		}
		printf("\n");
	}
	return(0);
}

/*
OUTPUT


*
**
***
**
*


*/