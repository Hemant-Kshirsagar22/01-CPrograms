#include <stdio.h>

int numberOne = 0;

int main(void)
{
	printf("numberOne Before postIncrement : %d\n",numberOne);

	numberOne++;

	printf("numberOne After postIncrement : %d\n",numberOne);

	return(0);
}
