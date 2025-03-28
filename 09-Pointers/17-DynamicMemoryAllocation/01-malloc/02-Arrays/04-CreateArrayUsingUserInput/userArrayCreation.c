#include <stdio.h>
#include <stdlib.h>

int *allocate(int);
void display(void);


int main(void)
{
	int numberOfElements = 0;
	int *pArray = NULL;

	printf("Enter Size Of The Array : ");
	scanf("%d", &numberOfElements);

	pArray = allocate(numberOfElements);

	return(0);
}

int allocate(int numberOfElements)
{
	return((int *)malloc(numberOfElements * sizeof(int)));
}

void deallocate(int *array)
{
	if(array)
	{
		free(array);
		array = NULL;
	}
}
