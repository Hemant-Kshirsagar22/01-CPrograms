#include <stdio.h>

int numberOne = 0;
int numberTwo = 0;
int numberOfRows = 0;

int main(void)
{
	printf("\n\nEnter Number Of Rows : ");
	scanf("%d",&numberOfRows);

	printf("\n\n");
	
	for(numberOne = 1; numberOne <= numberOfRows;numberOne++)
	{
		for(numberTwo = numberOfRows; numberTwo >=numberOne; numberTwo--)
		{
			printf(" ");
		}

		for(numberTwo = 1; numberTwo <= numberOne;numberTwo++)
		{
			printf("*");
		}

		printf("\n");
	}

	printf("\n\n");

	return(0);
}

/*
OUTPUT


Enter Number Of Rows : 5


     *
    **
   ***
  ****
 *****



*/
