#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int* allocate(int);
	void fillArray(int *, int);
	int* arrayAddition(int *, int *, int);
	void display(int *,int);

	int *arrayOne = NULL;
	int *arrayTwo = NULL;
	int *result = NULL;

	int numberOfElements = 0;

	printf("Enter The Size : ");
	scanf("%d",&numberOfElements);

	arrayOne = allocate(numberOfElements);
	arrayTwo = allocate(numberOfElements);

	fillArray(arrayOne, numberOfElements);
	fillArray(arrayTwo, numberOfElements);

	result = arrayAddition(arrayOne, arrayTwo, numberOfElements);

	printf("ArrayOne : ");
	display(arrayOne, numberOfElements);

	printf("ArrayTwo : ");
	display(arrayTwo, numberOfElements);

	printf("Result : ");
	display(result, numberOfElements);
	
	if(arrayOne)
        {
                free(arrayOne);
                arrayOne = NULL;
        }

        if(arrayTwo)
        {
                free(arrayTwo);
                arrayTwo = NULL;
        }

        if(result)
        {
                free(result);
                result = NULL;
        }

	return(0);
}

int* allocate(int numOfElements)
{
	int *array = (int*)malloc(numOfElements * sizeof(int));

	if(array == NULL)
	{
		printf("Malloc Failed !!!");
		exit(0);
	}

	return((int*)array);
}

void fillArray(int *array, int numOfElements)
{
	int i = 0;

	for(i = 0; i < numOfElements;i++)
	{
		array[i] = rand() % 100;
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

int *arrayAddition(int *arrayOne, int *arrayTwo, int numberOfElements)
{
	int *result = allocate(numberOfElements);

	int i = 0;

	for(i = 0; i < numberOfElements; i++)
	{
		result[i] = arrayOne[i] + arrayTwo[i];
	}

	return(result);
}

