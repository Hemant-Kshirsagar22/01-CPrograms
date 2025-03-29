#include <stdio.h>
#include <string.h>

char stringOne[] = "Hello World\0";

int main(void)
{
	printf("String : %s\n String Length : %lu\n",stringOne,strlen(stringOne));
	return(0);
}
