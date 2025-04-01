#include <stdio.h>
#include <string.h>


char string[512] = {'\0'};
char word[10] = {'\0'};

char result[512] = {'\0'};
int resIndex = 0;

int wordStart[10] = {0};
int wordCount = 0;
int stringLength = 0;

int wordPosition = 0;


int main(void)
{
	void getWordStart(void);
	void wordInsert(int);

	printf("Enter The String : ");
	gets(string);

	printf("%s\n",string);
	int i = 0;
	getWordStart();
/*	for(i = 0; i < wordCount;i++)
	{
		printf("%d\t",wordStart[i]);
	}
	printf("\n");
*/
	printf("Enter The Word : ");
	gets(word);

	printf("Enter Word Position : ");
	scanf("%d",&wordPosition);
	
	if(wordPosition > wordCount)
	{
		for(i = 0;i < strlen(string);i++)
		{
			result[i] = string[i];
		}
		
		result[i++] = ' ';
		int j = 0;

		for(j = 0; j < strlen(word);j++,i++)
		{
			result[i] = word[j];
		}

		printf("\n\nResult : %s\n\n",result);

		return(0);
	}

	if(wordPosition < 0)
	{
		wordPosition = 0;
	}

	wordInsert(wordPosition);

	printf("\n\nResult : %s\n\n",result);
	return(0);
}

void getWordStart(void)
{
	int i = 0;

	for(i = 0;string[i] != '\0' ;i++)
	{
		if(string[i] == ' ')
		{
			wordCount = wordCount + 1;
			wordStart[wordCount] = i+1;
		}
	}
	wordCount += 1;
	stringLength = i + 1;
}

void wordInsert(int position)
{
	int i = 0;
	resIndex = 0;
	for(i = 0; i < wordStart[position - 1];i++)
	{
		result[resIndex] = string[i];
//		printf("%c",result[resIndex]);
		resIndex = resIndex + 1;
	}

	for(i = 0; i < strlen(word);i++)
	{
		result[resIndex] = word[i];
//		printf("%c",result[resIndex]);
		resIndex = resIndex + 1;
	}
	result[resIndex++] = ' ';
	for(i = wordStart[position-1];i < stringLength;i++)
	{
		result[resIndex] = string[i];
//		printf("%c",result[resIndex]);
		resIndex = resIndex + 1;
	}
}

