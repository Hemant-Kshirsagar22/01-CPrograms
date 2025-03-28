#include <stdio.h>

int arrayOne[5] = { 1,2,3,4,5 };
int *pArrayOne = NULL;

int i = 0;

int main(void)
{
	pArrayOne = arrayOne;

	for(i = 0; i < 5; i++)
		printf("%d\n",pArrayOne[i]);

	return(0);
}

