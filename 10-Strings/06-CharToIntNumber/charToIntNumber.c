#include <stdio.h>

char cNumber[4] = {'\0'};

int numberOne = 0;

int numberTwo = 0;
int main(void)
{
    
    while (1) {
        for (numberOne = 0; cNumber[numberOne] != '\0'; numberOne++) {
                if(cNumber[numberOne] < 48 || cNumber[numberOne] > 58)
                {
                    numberOne = 1;
                    printf("Please Enter string number !!!\n\n");
                    break;
                }
        }
        
        if(numberOne == 0)
        {
            break;
        }
    }
    printf("Enter The String Number : ");
    gets(cNumber);

	printf("String = %s\n",cNumber);
	
	for(numberOne = 0;cNumber[numberOne] != '\0';numberOne++)
	{
		numberTwo = (numberTwo * 10) + (cNumber[numberOne] - 48);
	}

	printf("Integer = %d\n",numberTwo);

	return(0);
}

