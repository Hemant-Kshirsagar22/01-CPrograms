#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int* allocate(int);
	void fillArray(int *,int);
	void display(int *,int);

	int *arrayOne = NULL;
	int *arrayTwo = NULL;

	int numberOfElements = 0;

	printf("Enter The Size : ");
	scanf("%d",&numberOfElements);

	arrayOne = allocate(numberOfElements);
	arrayTwo = allocate(numberOfElements);

	fillArray(arrayOne, numberOfElements);
	fillArray(arrayTwo, numberOfElements);

	display(arrayOne, numberOfElements);
	display(arrayTwo, numberOfElements);

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
