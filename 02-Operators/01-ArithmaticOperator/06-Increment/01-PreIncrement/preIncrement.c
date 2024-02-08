#include <stdio.h>

int numberOne = 10;

int main(void)
{
	printf("numberOne Before PreIncrement : %d\n",numberOne);

	++numberOne;

	printf("numberOne After PreIncrement : %d\n",numberOne);

	return(0);
}

