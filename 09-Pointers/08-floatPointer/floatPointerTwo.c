#include <stdio.h>

float fNumber = 123.434f;
float *fPtr = &fNumber;

int main(void)
{
	printf("%f\n",*fPtr);
	return(0);

}
