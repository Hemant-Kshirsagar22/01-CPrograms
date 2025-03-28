#include <stdio.h>

int main(void)
{
	void display(int *,int);
	int arrayOne[] = {1,2,3,4,5,6,7,8,9,10};
	int arrayTwo[] = {1,2,3,4,5};

	printf("\n\nArrayOne :\n");
	display(arrayOne,sizeof(arrayOne) / sizeof(int));

	printf("\n\nArrayTwo :\n");
	display(arrayTwo,sizeof(arrayTwo) / sizeof(int));

	printf("\n\n");
	return(0);
}

void display(int *array, int numberOfElements)
{
	int i = 0;

	for(int i = 0; i < numberOfElements; i++)
	{
		printf("%d\t",array[i]);
	}
	printf("\n");
}

