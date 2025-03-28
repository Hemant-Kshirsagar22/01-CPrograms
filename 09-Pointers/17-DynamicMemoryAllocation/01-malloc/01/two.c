#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *iPtr;
	int iSize = 0;

	iSize = sizeof(int);

	iPtr = (int *)malloc(iSize);

	*iPtr = 100;

	printf("%d\n",*iPtr);
	return(0);
}
