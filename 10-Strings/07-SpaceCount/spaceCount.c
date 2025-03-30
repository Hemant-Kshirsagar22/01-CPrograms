#include <stdio.h>

char stringOne[20] = { '\0' };
int spaceCount = 0;
int numberOne = 0;
int main(void)
{
	printf("Enter a String : ");
	gets(stringOne);
	
	for(numberOne = 0; stringOne[numberOne] != '\0';numberOne++)
	{
		if(stringOne[numberOne] == ' ')
		{
			spaceCount = spaceCount + 1;
		}
	}
	
	printf("spaceCount : %d\n",spaceCount);

	return(0);
}
