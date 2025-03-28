#include <stdio.h>

char ch = 'A';
char *pInt = NULL;

int main(void)
{
	pInt = &ch;

	printf("%c\n",*pInt);

	return(0);
}
