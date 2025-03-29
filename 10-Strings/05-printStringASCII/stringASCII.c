#include <stdio.h>
#include <string.h>

char stringOne[] = "Hello World\0";
int numberOne = 0;

int main(void)
{
	printf("\n\n");

	for(numberOne = 0; numberOne < strlen(stringOne);numberOne++)
	{
		printf("ASCII Of %c is %d\n",stringOne[numberOne],stringOne[numberOne]);
	}

	printf("\n\n");
	return(0);
}
