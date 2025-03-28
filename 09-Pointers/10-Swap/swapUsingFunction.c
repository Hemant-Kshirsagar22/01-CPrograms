#include <stdio.h>

int main(void)
{
	void swap(int,int);

	int numberOne = 10;
	int numberTwo = 20;
	
	printf("Before Swaping MAIN:\nNumberOne : %d\tnumberTwo : %d\n\n",numberOne,numberTwo);

	swap(numberOne,numberTwo);

	printf("After Swaping MAIN:\nNumberOne : %d\tnumberTwo : %d\n\n",numberOne,numberTwo);

	return(0);
}

void swap(int numberOne, int numberTwo)
{
	int temp = 0;
	printf("Before Swaping in swap() :\nNumberOne : %d\tnumberTwo : %d\n\n",numberOne,numberTwo);
	temp = numberOne;
	numberOne = numberTwo;
	numberTwo = temp;

	printf("After Swaping in swap() :\nNumberOne : %d\tnumberTwo : %d\n\n",numberOne,numberTwo);
}

