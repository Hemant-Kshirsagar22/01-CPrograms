#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *pArrayOne = NULL;
	int iNumberOfElements = 0;
	int totalNumberOfBytes = 0;
	int iSize = 0;
	int i = 0;

	iSize = sizeof(int);
	iNumberOfElements = 100000;

	totalNumberOfBytes = iSize * iNumberOfElements;

	pArrayOne = (int *)malloc(totalNumberOfBytes);

	for(i = 0; i < iNumberOfElements; i++)
	{
		pArrayOne[i] = 0;
	}

	for(i = 0; i < iNumberOfElements; i++)
	{
		pArrayOne[i] = rand();
	}

	for(i = 0; i < iNumberOfElements; i++)
	{
		printf("pArrayOne[%d] : %d\n", i, pArrayOne[i]);
	}

	return(0);
}

