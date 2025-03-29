#include <stdio.h>
#include <string.h>

char stringOne[] = "Hello World\0";
int numberOne = 0;

int main(void)
{
	printf("\n\n");
	while(stringOne[numberOne] != '\0')
	{
		printf("ASCII OF %c is %d\n",stringOne[numberOne],stringOne[numberOne]);
		numberOne++;
	}
	printf("\n\n");
	return(0);
}
