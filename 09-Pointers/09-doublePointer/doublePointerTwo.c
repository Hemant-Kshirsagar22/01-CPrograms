#include <stdio.h>

double dNumber = 123.04945;
double *dPtr = &dNumber;

int main(void)
{
	printf("%lf\n",*dPtr);

	return(0);
}

