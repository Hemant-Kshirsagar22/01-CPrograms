#include <stdio.h>

float fNumber = 3.1421f;
float *fPtr = NULL;

int main(void)
{
	fPtr = &fNumber;
	printf("float number : %f\n",*fPtr);

	return(0);
}
