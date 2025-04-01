#include <stdio.h>
#include <stdlib.h>

// global Function Declarations
// for digit to int conversion
int charDigitToInt(char);
int numberStringToInt(char *);
int isValidStringNumber(char *);
int isValidExpression(char **, int numberOfTokens);

// string tokens related global function declarations
char **stringToTokens(char *, int *);
int numberOfWords(char *);
int numberOfCharactersInWord(char *);
void freeTokens(char **, int);

int main(void)
{
	// local variable declarations
	char expressionString[20] = { '\0' };
	int numberOfTokens = 0;
	int i = 0;
	printf("Enter The Number String : ");
	gets(expressionString);

	printf("Number Of Words : %d\n", numberOfWords(expressionString));

	char **tokens = stringToTokens(expressionString, &numberOfTokens);

    if(!isValidExpression(tokens, numberOfTokens))
    {
        printf("Expression Not Valid !!!\n\n");
        return(0);
    }
	for(i = 0; i < numberOfTokens; i++)
	{
		printf("%s\n", tokens[i]);
	}

    freeTokens(tokens, numberOfTokens);

	return(0);
}

int charDigitToInt(char charDigit)
{
	if(charDigit >= 48 && charDigit <= 58)
	{
		return(charDigit - '0');
	}
	else
	{
		return(0);
	}
}

int numberStringToInt(char *stringNumber)
{
	int numberOne = 0;
	int number = 0;

	while(stringNumber[numberOne] != '\0')
	{
		number = (number * 10) + charDigitToInt(stringNumber[numberOne]);
		numberOne++;
	}

	return(number);
}

int isValidStringNumber(char *stringNumber)
{
	int i = 0;

	for(i = 0; i < stringNumber[i] != '\0' && stringNumber[i] != ' '; i++)
	{
		if(stringNumber[i] < 48 || stringNumber[i] > 58)
		{
			return(0);
		}
	}

	return(1);
}

int isValidExpression(char **tokens, int numberOfTokens)
{
    int i = 0;
    
    for(i = 0; i < numberOfTokens; i++)
    {
        if(numberOfCharactersInWord(tokens[i]) > 1)
        {
            if(!isValidStringNumber(tokens[i]))
            {
                return(0);
            }
        }
        else
        {
            if(tokens[i][0] != '+' || tokens[i + 1] != NULL)
            {
                return(0);
            }
        }
    }
    
    return(1);
}

char **stringToTokens(char *string, int *numberOfTokens)
{
	int i = 0;
	int j = 0;
	int k = 0;

	char **arrayOfTokens = NULL;
    int cntWords = 0;
    int cntChar = 0;
    
	cntWords = numberOfWords(string);
	arrayOfTokens = (char **)malloc(sizeof(char *) * cntWords);

	cntChar = numberOfCharactersInWord(string);
	arrayOfTokens[0] = (char *)malloc(sizeof(char) * cntChar);


	for(i = 0, j = 0; i < string[i] != '\0'; i++)
	{
		if(string[i] == ' ')
		{
			j++;
			k = 0;
			cntChar = numberOfCharactersInWord(&string[i + 1]);
            arrayOfTokens[j] = (char *)malloc(sizeof(char) * cntChar);
            continue;
		}

		arrayOfTokens[j][k] = string[i];
        k++;
	}

	*numberOfTokens = j + 1;

	return(arrayOfTokens);
}

int numberOfWords(char *string)
{
	int i = 0;
	int count = 1;

	for(i = 0; string[i] != '\0'; i++)
	{
		if(string[i] == ' ')
		{
			count++;
		}
	}

	return(count);
}

int numberOfCharactersInWord(char *string)
{
	int i = 0;

	for(i = 0; string[i] != ' ' && string[i] != '\0'; i++);
	
	return(i);
}

void freeTokens(char **tokens, int numberOfTokens)
{
    int i = 0;
    
    for (i = 0; i < numberOfTokens; i++)
    {
        if(tokens[i])
        {
            free(tokens[i]);
            tokens[i] = NULL;
        }
    }
    
    if(tokens)
    {
        free(tokens);
        tokens = NULL;
    }
}
