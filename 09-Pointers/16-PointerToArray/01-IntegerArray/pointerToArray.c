#include <stdio.h>

int arrayOne[] = {1,2,3,4,5};
int *pArrayOne = NULL;
int i = 0;

int main(void)
{
	pArrayOne = arrayOne;

	printf("\n\nMETHOD 1: Base Address of Array : %p\n", arrayOne);
	printf("METHOD 2: Base Address of Array : %p\n\n", &arrayOne[0]);

	printf("Checking Pointer Array Duality\n\n");
	for(i = 0; i < 5; i++)
	{
		printf("%p == %p\n",(pArrayOne + i), &arrayOne[i]);	
	}
	
	printf("\n\nArray Accessing Using Pointer Peice Meal\n\n");

	printf("*(pArrayOne + 0) : %d\n", *(pArrayOne + 0));
	printf("*(pArrayOne + 1) : %d\n", *(pArrayOne + 1));
	printf("*(pArrayOne + 2) : %d\n", *(pArrayOne + 2));
	printf("*(pArrayOne + 3) : %d\n", *(pArrayOne + 3));
	printf("*(pArrayOne + 4) : %d\n", *(pArrayOne + 4));

	printf("\n\nArray Accessing Using Pointer using for loop\n\n");

	for(i = 0; i < 5; i++)
	{
		printf("%d\t",*(pArrayOne + i));
	}

	printf("\n\n");
	return(0);
}
