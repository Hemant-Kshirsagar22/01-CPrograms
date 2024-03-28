#include<stdio.h>

int numberOne = 0 ; 
int numberTwo = 0 ;
int count = 0;
char character;
char myName[10] = {'H','e','m','a','n','t'};

int main(void)
{
	for(numberOne = 0 ; numberOne < 6 ; numberOne++)
	{
		character = myName[numberOne];
		if(character == '\0')
			continue;
		for(numberTwo = 0 + numberOne , count = 0;numberTwo < 6; numberTwo++)
		{
			if(character == myName[numberTwo])
			{
				count++;				
				myName[numberTwo] = '\0';
			}
		}
		printf("%c count = %d\n",character,count);
	}

	return(0);
}
