#include <stdio.h>

int numberOne = 10;

int main(void)
{
	printf("numberOne Before Pre Decrement : %d\n",numberOne);

	--numberOne;

	printf("numberOne After Post Decrement : %d\n",numberOne);

	return(0);
}
