#include <stdio.h>
#include <string.h>

char wordOne[40] = { '\0' };
char wordTwo[40] = { '\0' };

int numberOne = 0;
int numberTwo = 0;

int main(void)
{
	printf("Enter First Word : ");
	gets(wordOne);

	printf("Enter Second Word : ");
	gets(wordTwo);

	printf("wordOne : %s\nwordTwo : %s\n",wordOne,wordTwo);

	if(strlen(wordOne) == strlen(wordTwo))
	{
		printf("\n\nCommon Characters : \n");
		for(numberOne = 0; numberOne < strlen(wordOne); numberOne++)
		{
            for(numberTwo = 0; numberTwo < strlen(wordOne);numberTwo++)
            {
                if(wordOne[numberOne] == wordTwo[numberTwo])
                {
                    printf("%c\n",wordOne[numberOne]);
                }
            }
		}
		printf("\n\n");
	}
	else
	{
		printf("\n\nWord Length is not equal\n\n");
	}

	return(0);
}

