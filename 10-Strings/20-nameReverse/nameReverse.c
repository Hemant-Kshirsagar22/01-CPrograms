#include <stdio.h>

char stringOne[255] = { '\0' };
char stringTwo[255] = { '\0' };
int nameStart[5] = { 0 };
int nameCount = 0;

int main(void)
{
	void nameReverse(void);

	printf("Enter Name And SirName : ");
	gets(stringOne);

	nameReverse();

	printf("'%s' Reversed Is '%s'",stringOne, stringTwo);

	return(0);
}

void nameReverse(void)
{
	int i = 0;
	int j = 0;
	int k = 0;

	for(i = 0,nameCount = 1; stringOne[i] != '\0'; i++)
	{
		if(stringOne[i] == ' ')
		{
			nameStart[nameCount] = i + 1;
			nameCount++;
		}
	}
	nameStart[nameCount] = i;
	nameCount++;

	for(i = nameCount; i > 0; i--)
	{
		for(j = nameStart[i - 1]; j < nameStart[i]; j++)
		{
			stringTwo[k] = stringOne[j];
			k++;
		}
	}
}
