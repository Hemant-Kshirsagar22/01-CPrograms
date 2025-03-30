// this program is for getting character from user and print all words starting with that character

#include <stdio.h>
#include <string.h>

char stringOne[50] = { '\0' };
char userChar = '\0';

int wordStart[20] = { 0 };
int numberOfWords = 0;

int main(void)
{
	void getWordStart(void);
	void printCharStartingWord(void);

	printf("Enter The String : ");
	gets(stringOne);

	printf("Enter A character : ");
	scanf("%c",&userChar);

	getWordStart();
	printCharStartingWord();

	return(0);
}

void getWordStart(void)
{
	int i = 0;
	int j = 0;
	
	for(i = 0, numberOfWords = 1; i < strlen(stringOne); i++)
	{
		if(stringOne[i] == ' ')
		{
			wordStart[numberOfWords] = i + 1;
			numberOfWords++;
		}
	}

}

void printCharStartingWord(void)
{
	int i = 0;
	int j = 0;

	for(i = 0; i < numberOfWords; i++)
	{
		if(userChar == stringOne[wordStart[i]])
		{
			for(j = wordStart[i]; stringOne[j] != ' ' && stringOne[j] != '\0'; j++)
			{
				printf("%c",stringOne[j]);
			}
			printf("\n");
		}
	}
}

