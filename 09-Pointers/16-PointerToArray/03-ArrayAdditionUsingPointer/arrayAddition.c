#include <stdio.h>

int main(void)
{
	void arrayAddition(int *, int *, int *);
	void display(int *);

	int arrayOne[5] = { 1, 2, 3, 4, 5 };
	int arrayTwo[5] = { 5, 3, 3, 2, 1 };
	int arrayThree[5] = { 0 };

	printf("\n\n");

	arrayAddition(arrayOne, arrayTwo, arrayThree);

	display(arrayOne);

	printf("\t\t+\n\n");
	display(arrayTwo);

	printf("\t\t=\n\n");
	display(arrayThree);

	printf("\n");
	return(0);
}

void arrayAddition(int *arrayOne, int *arrayTwo, int *arrayThree)
{
	int i = 0;

	for(i = 0; i < 5; i++)
	{
		arrayThree[i] = arrayOne[i] + arrayTwo[i];
	}
}

void display(int *array)
{
	int i = 0;

	for(i = 0; i < 5; i++)
	{
		printf("%d\t",array[i]);
	}
	printf("\n\n");
}

