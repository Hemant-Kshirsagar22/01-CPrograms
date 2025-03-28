#include <stdio.h>

int main(void)
{
	// function declarations
	void display(int *, int);
	void multiplication(int *, int *, int *);

	// local variable declarations
	int arrayOne[5] = {1,2,3,4,5};
	int arrayTwo[5] = {1,2,3,4,5};
	int arrayThree[5] = { 0 };

	multiplication(arrayOne,arrayTwo,arrayThree);

	printf("\n\nArray One : \n");
	display(arrayOne, sizeof(arrayOne) / sizeof(int));

	printf("\nArray Two : \n");
	display(arrayTwo, sizeof(arrayOne) / sizeof(int));

	printf("\nMultiplication : \n");
	display(arrayThree, sizeof(arrayOne) / sizeof(int));

	printf("\n\n");
	return(0);
}

void multiplication(int *arrayOne, int *arrayTwo, int *arrayThree)
{
	int i = 0;

	for(i = 0; i < 5; i++)
	{
		arrayThree[i] = arrayOne[i] * arrayTwo[i];
	}
}

void display(int *array, int numberOfElements)
{
	int i = 0;

	for(i = 0; i < numberOfElements; i++)
	{
		printf("%d\t",array[i]);
	}

	printf("\n");
}

