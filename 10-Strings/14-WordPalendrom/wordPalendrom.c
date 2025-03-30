#include <stdio.h>
#include <string.h>

char wordOne[50] = { '\0' };

int main(void)
{
	int isWordPalendrom(void);

	printf("Enter The Word : ");
	gets(wordOne);

	if(isWordPalendrom())
	{
		printf("%s is palendrom\n\n",wordOne);
	}
	else
	{
		printf("%s is not palendrom\n\n",wordOne);
	}

	return(0);
}

int isWordPalendrom(void)
{
	int i = 0;

	int wordLength = 0;

	wordLength = strlen(wordOne);
	for(i = 0; i < wordLength / 2; i++)
	{
		if(wordOne[i] != wordOne[wordLength - i - 1])
		{
			return(0);
		}
	}
	return(1);
}

