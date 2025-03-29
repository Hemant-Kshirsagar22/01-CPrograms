#include <stdio.h>

char stringOne[] = "Hello World !!!\n";
int arrayOne[20] = { 0 };
int numberOne = 0;
int numberTwo = 0;

int main(void)
{
	for(numberOne = 0; stringOne[numberOne] != '\0'; numberOne++)
	{
		arrayOne[numberOne] = stringOne[numberOne];
	}

	for(numberTwo = 0; numberTwo < numberOne-1; numberTwo++)
	{
		printf("%c = %d\n",arrayOne[numberTwo],arrayOne[numberTwo]);
	}

	return(0);
}

