#include <stdio.h>

char stringOne[] = "Hello World !!!\0";
int arrayOne[20] = {0};

int numberOne = 0;
int numberTwo = 0;

int main(void)
{
	for(numberOne = 0; stringOne[numberOne] != '\0';numberOne++)
	{
		arrayOne[numberOne] = stringOne[numberOne];

	}
	
	printf("\n\n");
	for(numberTwo = 0; numberTwo < numberOne;numberTwo++)
	{
		if(arrayOne[numberTwo] % 2 == 1)
		{
			printf("%c = %d\n",arrayOne[numberTwo],arrayOne[numberTwo]);
		}
	}
	printf("\n\n");
	return(0);
}

