#include <stdio.h>

int numberOne = 0;
int numberTwo = 0;

int counterNumber = 0;
int main(void)
{

	printf("\n\n");

	for(numberOne = 1,counterNumber = 1;numberOne <= 3;numberOne++)
	{
		for(numberTwo = 1; numberTwo <= numberOne;numberTwo++,counterNumber++)
		{
			printf("%d",counterNumber);
		}
		printf("\n");
	}

	for(numberOne = 2; numberOne >= 1; numberOne--)
	{
		for(numberTwo = 1; numberTwo <= numberOne;numberTwo++,counterNumber++)
		{
			printf("%d",counterNumber);
		}
		printf("\n");
	}
	return(0);
}

/*
OUTPUT


1
23
456
78
9

*/