#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *iPtr = NULL;

	iPtr = (int *)malloc(4);

	*iPtr = 100;

	printf("%d\n", *iPtr);

	return(0);
}

