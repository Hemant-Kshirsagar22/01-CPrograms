#include <stdio.h>

int main(void)
{
	int numberOne = 10;
	int *pNumberOne = NULL;
	int **ppNumberOne = NULL;

	pNumberOne = &numberOne;
	ppNumberOne = &pNumberOne;

	printf("Number : %d\nsingle indirection : %d\ndouble indirection  : %d\n", numberOne, *pNumberOne, **ppNumberOne);

	if(*ppNumberOne == pNumberOne)
	{
		printf("\n\n*ppNumberOne == pNumberOne\n%p == %p\n\n", *ppNumberOne, pNumberOne);
	}
	return(0);
}
