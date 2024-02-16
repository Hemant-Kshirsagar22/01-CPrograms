#include <stdio.h>

int numberOne = 0;
int numberTwo = 0;
int noOfRows = 0;
int noOfColumns = 0;

int main(void)
{
	printf("\n\nEnter Number Of Rows : ");
	scanf("%d",&noOfRows);

	printf("Enter Number Of Columns : ");
	scanf("%d",&noOfColumns);

	printf("\n\n");
	
	for(numberOne = 1; numberOne <= noOfRows;numberOne++)
	{
		for(numberTwo = 1; numberTwo <= noOfColumns;numberTwo++)
		{
			printf("* ");
		}
		printf("\n");
	}

	printf("\n\n");
	return(0);
}

/* OUTPUT :-


Enter Number Of Rows : 5
Enter Number Of Columns : 5


* * * * *
* * * * *
* * * * *
* * * * *
* * * * *


*/