#include <stdio.h>

int numberOne = 10;

int *pNumberOne = NULL;

int main(void)
{
	pNumberOne = &numberOne;

	printf("Using Number : %d\t using Pointer : %d\n",numberOne, *pNumberOne);

	*pNumberOne = 100;

	printf("\n\nUsing Number : %d\t using Pointer : %d\n", numberOne, *pNumberOne);
	return(0);
}
