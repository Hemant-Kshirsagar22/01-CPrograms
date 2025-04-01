#include <stdio.h>

char string[3][20];

int i = 0;
int main(void)
{
	for(i = 0; i < 3; i++)
	{
		printf("Enter %d String : ", i + 1);
		gets(string[i]);
	}

	printf("\n\n");

	for(i = 0; i < 3; i++)
	{
		printf("%s\n",string[i]);
	}
	return(0);
}
