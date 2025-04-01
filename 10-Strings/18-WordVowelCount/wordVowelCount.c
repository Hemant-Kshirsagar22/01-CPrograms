#include <stdio.h>

char arrayOne[256] = { '\0'};

int main(void)
{

	int vowelCount(void);

	printf("Enter The String : ");
	gets(arrayOne);

	printf("Number Of Vowels In '%s' is %d\n",arrayOne,vowelCount());

	return(0);
}

int vowelCount(void)
{
	int i = 0;
	int count = 0;

	for(i = 0; arrayOne[i] != '\0'; i++)
	{
		switch(arrayOne[i])
		{
			case 'A':
			case 'a':
			case 'E':
			case 'e':
			case 'I':
			case 'i':
			case 'O':
			case 'o':
			case 'U':
			case 'u':
				count = count + 1;
				break;

			default:
				break;
		}
	}

	return(count);
}
