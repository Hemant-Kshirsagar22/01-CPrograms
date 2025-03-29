#include <stdio.h>

char stringOne[] = "Hello World!!!\0";
int numberOne = 0;
int count = 0;

int main(void)
{
	numberOne = 0;
	while(stringOne[numberOne] != '\0')
	{
		count++;
		numberOne++;
	}

	printf("length of \"%s\" is %d\n",stringOne,count);

	return(0);
}
