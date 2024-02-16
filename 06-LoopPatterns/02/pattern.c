#include <stdio.h>

int noOfRows = 0;

int numberOne = 0;
int numberTwo = 0;

int main(void)
{
	printf("\n\nEnter Number Of Rows : ");
	scanf("%d",&noOfRows);

	printf("\n\n");
										
	for(numberOne = 1; numberOne <= noOfRows;numberOne++)
	{

		for(numberTwo = 1;numberTwo <= numberOne ;numberTwo++)
		{
			printf("* ");
		}
		printf("\n");
	}

	return(0);
}

/*
OUTPUT

Enter Number Of Rows : 5


*
* *
* * *
* * * *
* * * * *


*/