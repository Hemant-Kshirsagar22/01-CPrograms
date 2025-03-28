#include <stdio.h>

int numberOne = 2024;
int *number = &numberOne;

int main(void)
{
	printf("numberOne = %d\n",*number);

	*number = 4024;

	printf("numberOne = %d\n",*number);

	return(0);
}
