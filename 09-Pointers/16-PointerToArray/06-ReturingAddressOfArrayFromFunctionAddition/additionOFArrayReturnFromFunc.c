#include <stdio.h>

int main(void)
{
	int * arrayAddition(int *, int *);
	void display(int *);

	int arrayOne[] = {1,2,3,4,2};
	int arrayTwo[] = {1,2,3,4,5};

	int *result = arrayAddition(arrayOne,arrayTwo);
	display(result);
	return(0);
}

int * arrayAddition(int *arrayOne, int *arrayTwo)
{
	int arrayThree[5];
	int i = 0;

	for(i = 0; i < 5; i++)
	{
		arrayThree[i] = arrayOne[i] + arrayTwo[i];
	}
	return(&arrayThree[0]);
}

void display(int *result)
{
	int i = 0;

	for(i = 0; i < 5; i++)
	{
		printf("%d\t", result[i]);
	}
	printf("\n\n");
}

