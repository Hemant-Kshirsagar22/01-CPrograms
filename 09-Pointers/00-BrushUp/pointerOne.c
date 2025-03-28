#include <stdio.h>

int numberOne = 0;

int *pNum = 0;

int main(void)
{
	pNum = &numberOne;

	if(pNum == &numberOne)
	{
		printf("Address is same %p == %p\n",pNum, &numberOne);
	}
	return(0);
}
