#include <stdio.h>

int numberOne = 0;
int numberTwo = 0;
int counterNumber = 0;
int numberOfRows = 0;
int numberOfColumns = 0;

int main(void)
{
	printf("\n\nEnter Number Of Rows : ");
	scanf("%d",&numberOfRows);

	printf("\n\nEnter Number Of Columns : ");
	scanf("%d",&numberOfColumns);

	printf("\n\n");
	
	counterNumber = 1;
	
	for(numberOne = 1; numberOne <= numberOfRows; numberOne++)
	{
		for(numberTwo = 1; numberTwo <= numberOfColumns; numberTwo++,counterNumber++)
		{
			printf(" %d ",counterNumber);
		}
		printf("\n");
	}

	printf("\n\n");

	return(0);
}

/*
OUTPUT


Enter Number Of Rows : 3


Enter Number Of Columns : 3


 1  2  3
 4  5  6
 7  8  9


*/