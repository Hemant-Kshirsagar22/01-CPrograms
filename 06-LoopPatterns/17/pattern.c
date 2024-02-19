#include <stdio.h>

int numberOne = 0;
int numberTwo = 0;
int numberThree = 0;
int main(void)
{

	printf("\n\n");

	for(numberOne = 5; numberOne >= 1; numberOne--)
	{
		

		if(numberOne % 2 != 0)
		{
			
			for(numberTwo = 1 ; numberTwo <= numberThree ; numberTwo++)
			{
				printf(" ");
			}

			numberThree++;

			for(numberTwo = 1;numberTwo <= numberOne;numberTwo++)
			{
				printf("*");
			}
			printf("\n");
		}

		
	}

	return(0);
}

/*
OUTPUT


*****
 ***
  *


*/
