#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	void emptyArray(int *,int);
	void fillArrayRandom(int *, int);
	int* arrayAddition(int *,int *, int);
	void display(int *, int);

	int arrayOne[10];
	int arrayTwo[10];
	int *pResult = NULL;

	emptyArray(arrayOne, 10);
	emptyArray(arrayTwo, 10);

	fillArrayRandom(arrayOne, 10);
	fillArrayRandom(arrayTwo, 10);

	pResult = arrayAddition(arrayOne, arrayTwo, 10);

	if(pResult == NULL)
	{
		return(0);
	}

	printf("ArrayOne : ");
	display(arrayOne, 10);

	printf("ArrayTwo : ");
	display(arrayTwo, 10);

	printf("Addition : ");
	display(pResult, 10);

	if(pResult)
	{
		free(pResult);
	}
	return(0);
}

void emptyArray(int *array, int numOfElements)
{
	int i = 0;

	for(i = 0; i < numOfElements; i++)
	{
		array[i] = 0;
	}
}
void fillArrayRandom(int *array, int numOfElements)
{
	int i = 0;

	for(i = 0; i < numOfElements; i++)
	{
		array[i] = rand() % 10;
	}
}

void display(int *array, int numOfElements)
{
	int i = 0;

	printf("\n");

	for(i = 0; i < numOfElements; i++)
	{
		printf("%d\t", array[i]);
	}

	printf("\n\n");
}

int *arrayAddition(int *arrayOne, int *arrayTwo, int numOfElements)
{
	int *result = NULL;
	int i = 0;

	result = (int *)malloc(numOfElements * sizeof(int));

	if(result == NULL)
	{
		printf("malloc() failed !!!\n\n");
		return(result);
	}

	for(i =  0; i < numOfElements; i++)
	{
		result[i] = arrayOne[i] + arrayTwo[i];
	}

	return(result);
}
