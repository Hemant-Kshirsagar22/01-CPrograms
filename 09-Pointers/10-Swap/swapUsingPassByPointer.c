#include <stdio.h>

// swap pass by reference
int main(void)
{
	void swap(int*, int*);
	
	int numberOne = 10;
	int numberTwo = 20;
	
	printf("Before Swap\nNumberOne : %d\tnumberTwo : %d\n",numberOne,numberTwo);

	swap(&numberOne,&numberTwo);

	printf("After Swap \nNumberOne : %d\tnumberTwo : %d\n",numberOne,numberTwo);
	return(0);
}

void swap(int *pNumberOne, int *pNumberTwo)
{
	int temp = 0;

	temp = *pNumberOne;
	*pNumberOne = *pNumberTwo;
	*pNumberTwo = temp;
}

