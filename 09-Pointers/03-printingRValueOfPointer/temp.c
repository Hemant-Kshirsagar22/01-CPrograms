#include <stdio.h>

int numberOne = 2024;
int *number = &numberOne;
int main(void)
{
	printf("&numberOne : %p\n",&numberOne);
	printf("number : %p\n",number);
	return(0);
}
