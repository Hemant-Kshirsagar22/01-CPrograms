#include <stdio.h>

char character = 'H';
char *pChar = &character;

int main(void)
{
	printf("char : %c\n",*pChar);
	return(0);
}

