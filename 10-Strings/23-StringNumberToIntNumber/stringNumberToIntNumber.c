#include <stdio.h>

char numberString[10] = { '\0' };

int charDigitToInt(char);
int numberStringToInt(char *);
int validateString(char *);

int main(void)
{
	printf("Enter The Number String : ");
	gets(numberString);

	if(!validateString(numberString))
	{
		printf("Please Enter Valid Number String !!!\n");
		return(0);
	}

	int number = numberStringToInt(numberString);
	
	printf("'%s' = %d\n", numberString, number);
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

int validateString(char *stringNumber)
{
	int i = 0;

	for(i = 0; i < stringNumber[i] != '\0'; i++)
	{
		if(stringNumber[i] < 48 || stringNumber[i] > 58)
		{
			return(0);
		}
	}

	return(1);
}
