#include <stdio.h>

double dNumber = 0.00000453;
double *dPtr = NULL;

int main(void)
{
	dPtr = &dNumber;

	printf("double Number : %lf\n",*dPtr);

	return(0);
}
