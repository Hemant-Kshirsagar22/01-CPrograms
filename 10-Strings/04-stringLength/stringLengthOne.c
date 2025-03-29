#include <stdio.h>

char stringOne[] = "Hello World\0";
int numberOne = 0;

int main(void)
{
	
	printf("String : %s\n",stringOne);
	
	numberOne = 0;
	while(stringOne[numberOne] != '\0')
	{
		numberOne++;
	}

	printf("Length : %d\n",numberOne);

	return(0);
}
