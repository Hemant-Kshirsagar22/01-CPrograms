#include <stdio.h>

int numberOne = 2024;
int *number = &numberOne;

int main(void)
{
	printf("address of numberOne : %p\n",&numberOne);
	printf("rvalue of number : %p\n",number);
	printf("Dereferencing of pointer  number : %d\n",*number);

	return(0);
}
