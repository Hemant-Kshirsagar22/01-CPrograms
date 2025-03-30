#include <stdio.h>

char cNumber = 'A';
int numberOne = 0;

int main(void)
{
	int asciiToInt(char);

	printf("Enter Digit : ");
	gets(&cNumber);

	if(cNumber < 48 || cNumber > 58)
	{
		printf("Please Enter The Number !!!\n");
		return(0);
	}

	numberOne = asciiToInt(cNumber);
	printf("character %c : Integer %d\n",cNumber,numberOne);
		if(cNumber != numberOne)
		{
			printf("%d is not ASCII OF %c\n",numberOne,cNumber);
		}
	

	return(0);
}

int asciiToInt(char character)
{
	return(character - 48);
}
