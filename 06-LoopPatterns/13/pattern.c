#include <stdio.h>

int numberOne = 0;
int numberTwo = 0;

int counterNumber = 0;

int main(void)
{

	printf("\n\n");

	counterNumber = 1;

	for(numberOne = 1; numberOne <= 5; numberOne++)
	{
		for(numberTwo = 3; numberTwo > numberOne; numberTwo--)
		{
			printf(" ");
		}


		if(numberOne % 2 != 0)
		{
			for(numberTwo = 1;numberTwo <= numberOne;numberTwo++,counterNumber++)
			{
				printf("%d ",counterNumber * counterNumber);
			}
			printf("\n");
		}

		
	}

	return(0);
}

/*
OUTPUT


  1
 4 9 16
25 36 49 64 81

*/
