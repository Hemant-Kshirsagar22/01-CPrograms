#include <stdio.h>

int numberOne = 0;
int numberTwo = 0;
int result = 0;

char stringNumberOne[10] = {'\0'};
char stringNumberTwo[10] = {'\0'};

int main(void)
{
	int stringToInt(char[]);
	int isStringNumber(char[]);

	printf("Enter The First String Number : ");
	gets(stringNumberOne);

	printf("Enter The Second String Number : ");
	gets(stringNumberTwo);
	
	numberOne = stringToInt(stringNumberOne);
	numberTwo = stringToInt(stringNumberTwo);
	
	result = numberOne + numberTwo;
	
	printf("\n\n%d + %d = %d\n\n",numberOne,numberTwo,result);

	return(0);
}

int isStringNumber(char stringNumber[])
{
	int numberOne = 0;
	
	for(numberOne = 0; stringNumber[numberOne] != '\0'; numberOne++)
	{
		if(stringNumber[numberOne] < 48 || stringNumber[numberOne > 58])
		{
			return(0);
		}
	}

	return(1);
}


int stringToInt(char stringNumber[])
{
	int numberOne = 0;

	int numberTwo = 0;

	for(numberOne = 0; stringNumber[numberOne] != '\0'; numberOne++)
	{
		numberTwo = (numberTwo * 10) + (stringNumber[numberOne] - 48);
	}

	return(numberTwo);
}
