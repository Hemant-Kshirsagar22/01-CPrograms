#include <stdio.h>

char stringOne[30] = {'\0'};

int numberOne = 0;
int numberTwo = 0;
int result = 0;
int numberThree = 0;

int wordStart[10] = {0};

int main(void)
{
	int wordCount(char[]);
	int stringToInt(char[],int);

	printf("Enter String with addition Expression : ");
	gets(stringOne);
//	fgets(stringOne,sizeof(stringOne),stdin);
	
	numberThree = wordCount(stringOne);
	//printf("%s",stringOne);
	if(numberThree != 3)
	{
		printf("Enter Correct String !!!\n\n");
		return(0);
	}
	

	numberOne = stringToInt(stringOne,wordStart[0]);

	numberTwo = stringToInt(stringOne,wordStart[2]);

	switch(stringOne[wordStart[1]])
	{
		case '+':
			result = numberOne + numberTwo;
			printf("%d + %d = %d\n",numberOne,numberTwo,result);
			break;
		case '-':
			result = numberOne - numberTwo;
			printf("%d - %d = %d\n",numberOne,numberTwo,result);
			break;

		case '*':
			result = numberOne * numberTwo;
			printf("%d * %d = %d\n",numberOne,numberTwo,result);
			break;

		case '/':
			result = numberOne / numberTwo;
			printf("%d / %d = %d\n",numberOne,numberTwo,result);
			break;

		default :
			printf("Enter Correct Operator !!!\n");
			break;
	}


	return(0);
}

int wordCount(char string[])
{
	int spaceCount = 0;
	int numberOne = 0;
	int numberTwo = 0;

	wordStart[numberTwo++] = 0;

	for(numberOne = 0; string[numberOne] != '\0';numberOne++)
	{
		if(string[numberOne] == ' ')
		{
			spaceCount++;
			wordStart[numberTwo++] = numberOne + 1;
		}
	}

	return(spaceCount+1);
}

int stringToInt(char string[],int number)
{
	int numberOne = 0;
	int numberTwo = 0;
	
	for(numberOne = number;((string[numberOne] != ' ') && (string[numberOne] != '\0'));numberOne++)
	{
		numberTwo = (numberTwo * 10) + (string[numberOne] - 48);
	}

	return(numberTwo);
}
