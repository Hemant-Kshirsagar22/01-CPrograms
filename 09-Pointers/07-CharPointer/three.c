#include <stdio.h>

int numberOne;
int *iPtr = &numberOne;

int main(void)
{
	numberOne = 16595;
	printf("%d\n",*iPtr);

	return(0);
}
