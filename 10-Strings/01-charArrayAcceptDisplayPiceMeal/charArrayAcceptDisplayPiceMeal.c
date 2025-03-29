#include <stdio.h>

char stringOne[14];

int main(void)
{
	stringOne[0] = 'H';
	stringOne[1] = 'e';
	stringOne[2] = 'l';
	stringOne[3] = 'l';
	stringOne[4] = 'o';
	
	stringOne[5] = ' ';

	stringOne[6] = 'W';
	stringOne[7] = 'o';
	stringOne[8] = 'r';
	stringOne[9] = 'l';
	stringOne[10] = 'd';
	stringOne[11] = '!';
	stringOne[12] = '!';
	stringOne[13] = '!';
	int numberOne = 0;

	while(numberOne < 14)
	{
		printf("%c",stringOne[numberOne]);
		numberOne++;
	}
	printf("\n\n");
	return(0);
}
