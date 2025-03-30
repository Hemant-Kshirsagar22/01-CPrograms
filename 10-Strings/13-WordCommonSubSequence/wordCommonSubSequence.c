#include <stdio.h>
#include <string.h>

char wordOne[50] = { '\0' };
char wordTwo[50] = { '\0' };

char result[50] = { '\0' };

int numberOne = 0;
int numberTwo = 0;

int main(void)
{
	void printCommonSubSequence(void);

	printf("Enter First Word : ");
	gets(wordOne);

	printf("Enter Second Word : ");
	gets(wordTwo);

	printCommonSubSequence();

	return(0);
}

void printCommonSubSequence(void)
{
	int wordLengthOne = 0;
	int wordLengthTwo = 0;

	wordLengthOne = strlen(wordOne);
	wordLengthTwo = strlen(wordTwo);

	if(wordLengthOne != wordLengthTwo)
	{
		printf("\nSTRING LENGTH NOT EQUAL !!!\n");
		return;
	}

	for(numberOne = 0; numberOne < wordLengthOne; numberOne++)
	{
		for(numberTwo = 0; numberTwo < wordLengthOne; numberTwo++)
		{
			if(wordOne[numberOne] == wordTwo[numberTwo])
			{
				flag = flag + 1;
			}
		}
	}
}

