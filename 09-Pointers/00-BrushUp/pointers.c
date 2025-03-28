#include <stdio.h>

int number = 10;
char character = 'A';
float floatingPointValue = 3.142f;
double doublePresisionValue = 0.000003;

int *pNum = NULL;
float *pFloat = NULL;
char *pChar = NULL;
double *pDouble = NULL;

int main(void)
{
	pNum = &number;
	pChar = &character;
	pFloat = &floatingPointValue;
	pDouble = &doublePresisionValue;

	printf("%p => %d\n", pNum, *pNum);
	printf("%p => %c\n", pChar, *pChar);
	printf("%p => %f\n", pFloat, *pFloat);
	printf("%p => %lf\n", pDouble, *pDouble);

	return(0);
}

