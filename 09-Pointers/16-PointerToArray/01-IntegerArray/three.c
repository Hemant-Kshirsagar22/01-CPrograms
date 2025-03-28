#include <stdio.h>

int arrayOne[] = {1,2,3,4,5};

int i = 0;

int main(void)
{
	for(i = 0; i < 5; i++)
	{
		printf("%d\n", *(arrayOne + i));
	}
	return(0);
}

