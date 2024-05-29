// in this program we print first duplicate character in char array
#include<stdio.h>

int numberOne = 0 ; 
int numberTwo = 0 ;
int count = 0;
char character;
char myName[10] = {'H','e','m','a','n','H'};

int main(void)
{
	for(numberOne = 0 ; numberOne < 6 ; numberOne++)
	{
		character = myName[numberOne];

		for(numberTwo = 0 + numberOne , count = 0;numberTwo < 6; numberTwo++)
		{
			if(character == myName[numberTwo])
			{
				count++;				
			}
		}

		if(count == 2)
		{
			printf("%c\n",character);
		}
	}

	return(0);
}
