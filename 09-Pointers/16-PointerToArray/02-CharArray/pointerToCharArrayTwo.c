#include <stdio.h>

char arrayOne[] = "hemant\0";
char *pArrayOne = NULL;

int i = 0;

int main(void)
{
	printf("\n\nAccessing Array Using Pointer Subscript Brackets\n\n");

	pArrayOne = arrayOne;

	for(i = 0;i < pArrayOne[i] != '\0'; i++)
	{
		printf("%c", pArrayOne[i]);
	}

	printf("\n\n");

	return(0);
}


