#include <stdio.h>
#include <string.h>

char stringOne[512] = { '\0' };
char stringTwo[512] = { '\0' };
char result[512] = { '\0' };

int resultIndex = 0;

int wordCountOne = 0;
int wordCountTwo = 0;
int wordCountResult = 0;

int wordLengthOne[10] = { 0 };
int wordLengthTwo[10] = { 0 };
int wordLengthResult[10] = { 0 };

int wordStartOne[10] = { 0 };
int wordStartTwo[10] = { 0 };
int wordStartResult[10] = { 0 };

int main(void)
{
	void getStringStart(char[],int[],int[],int*);
	void stringUnion(void);

	printf("Enter String One : ");
	gets(stringOne);

	printf("Enter String Two : ");
	gets(stringTwo);

	getStringStart(stringOne,wordStartOne,wordLengthOne,&wordCountOne);
	getStringStart(stringTwo,wordStartTwo,wordLengthTwo,&wordCountTwo);

	stringUnion();

	printf("\n%s",result);
	printf("\n");
	return(0);
}

void getStringStart(char string[],int wordStart[],int wordLength[],int *wordCount)
{
	int i = 0;
	int j = 0;

	for(i = 0, *wordCount = 1; i < strlen(string); i++)
	{
		if(string[i] == ' ')
		{
			wordLength[j] = i - 1;
			j++;
			wordStart[*wordCount] = i + 1;
			*wordCount = *wordCount + 1;
		}
	}
	wordLength[j] = strlen(string) - 1;
}

void stringUnion(void)
{
	int isStringContainsWord(char[],int[],int);

	int i = 0;
	int j = 0;
	
	for(i = 0; i < wordCountOne; i++)
	{
		if(!isStringContainsWord(stringOne,wordLengthOne,wordStartOne[i]))
		{
			for(j = wordStartOne[i]; stringOne[j] != ' ' && stringOne[j] != '\0';j++)
			{
				result[resultIndex] = stringOne[j];
				resultIndex++;
			}
			result[resultIndex] = ' ';
			resultIndex++;
		}
	}

	for(i = 0; i < wordCountTwo; i++)
        {
                if(!isStringContainsWord(stringTwo,wordLengthTwo,wordStartTwo[i]))
                {
                        for(j = wordStartTwo[i]; stringTwo[j] != ' ' && stringTwo[j] != '\0';j++)
                        {
                                result[resultIndex] = stringTwo[j];
                                resultIndex++;
                        }
                        result[resultIndex] = ' ';
                        resultIndex++;
                }
        }
}

int isStringContainsWord(char string[],int wordLength[],int wordStart)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int flag = 0;

	wordCountResult = 0;

	getStringStart(result,wordStartResult,wordLengthResult,&wordCountResult);
	
	for(i = 0; i < wordCountResult;i++)
	{
		flag = 0;
		if((wordLengthResult[i] - wordStartResult[i]) == (wordLength[wordStart] - wordStart))
		{
			for(j = wordStart,k = wordStartResult[i]; string[j] != ' ' && string[j] != '\0';j++,k++)
			{
				if(string[j] != result[k])
				{
					flag = 1;
			                break;
				}
			}

			if(flag == 0)
			{
				return(1);
			}
		}
	}
	return(0);
}

