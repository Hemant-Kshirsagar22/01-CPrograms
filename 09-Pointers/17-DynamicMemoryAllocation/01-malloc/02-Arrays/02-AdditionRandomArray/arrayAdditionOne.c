#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

void emptyArray(int *,int);
void fillArrayRandom(int *, int);
int* arrayAddition(int *,int *, int);
void display(int *, int);
int memoryAllocation(int **, int);


int main(void)
{
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
	int iSize = sizeof(int);
	int totalBytes = numOfElements * iSize;
	int bResult = 0;
	
	bResult = memoryAllocation(&result,totalBytes);
	
	if(bResult == FALSE)
	{
		printf("Memory Allocation Failed !!!\n\n");
		return(result);
	}

	for(i =  0; i < numOfElements; i++)
	{
		result[i] = arrayOne[i] + arrayTwo[i];
	}

	return(result);
}

int memoryAllocation(int **array, int numberOfBytes)
{
        *array = (int *)malloc(numberOfBytes);
        if(array == NULL)
        {
                return(FALSE);
        }
	else
	{
		return(TRUE);
	}
}

