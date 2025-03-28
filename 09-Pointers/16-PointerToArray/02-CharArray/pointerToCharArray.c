#include <stdio.h>

char arrayOne[] = { 'H', 'e', 'm', 'a', 'n', 't' };
char *pArrayOne = NULL;

int i = 0;

int main(void)
{
	pArrayOne = arrayOne;

	printf("\n\nAccessing array using Pointer : \n\n");
	for(i = 0; i < 6; i++)
	{
		printf("%c",*(pArrayOne + i));
	}
	printf("\n\n");
	return(0);
}
