#include <stdio.h>
#include <string.h>

char stringOne[] = "Hello World !!!\0";

int main(void)
{
	printf("length of %s is %ld\n",stringOne,strlen(stringOne));

	return(0);
}
