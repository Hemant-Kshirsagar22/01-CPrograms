#include <stdio.h>

int *number = NULL;
int numberOne = 2024;

int main(void)
{
	number = &numberOne;

	printf("%d\n",*number);

	return(0);
}
