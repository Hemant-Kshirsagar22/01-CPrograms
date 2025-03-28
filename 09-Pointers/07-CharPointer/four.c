#include <stdio.h>

char character;
char *pChar = &character;

int main(void)
{
	character = 'H';

	printf("%c\n",*pChar);

	return(0);
}
