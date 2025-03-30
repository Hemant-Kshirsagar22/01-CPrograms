#include <stdio.h>
#include <string.h>

char arrayOfNames[10][40];
int numberOfNames = 0;
char nameStart = '\0';

int main(void)
{
	void acceptNames(void);
	void displayNames(void);
	void printNamesStartingWithChar(void);
    char getSirNameChar(int);

	printf("Enter Number Of Names : ");
	scanf("%d",&numberOfNames);

	acceptNames();
	displayNames();
	
	printf("Enter Character To Print Names : ");
	scanf("%c",&nameStart);
	
    getSirNameChar(0);
	printNamesStartingWithChar();

	return(0);
}

void acceptNames(void)
{
	int i = 0;

	for(i = 0;i < numberOfNames;i++)
	{
		printf("Enter %d Name And SirName : ",(i+ 1));
		fflush(stdin);
		gets(arrayOfNames[i]);
	}
}

void displayNames(void)
{
	int i = 0;

	printf("\n\nNames : \n");
	for(i = 0; i < numberOfNames; i++)
	{
		printf("%s\n",arrayOfNames[i]);
	}
	printf("\n\n");
}

void printNamesStartingWithChar(void)
{
	int i = 0;
	char getSirNameChar(int);
    char sirNameStart = '\0';

	printf("\nNAMES STARTING WIITH '%c'\n",nameStart);

	for(i = 0; i < numberOfNames; i++)
	{
        sirNameStart = getSirNameChar(i);
        if(nameStart == arrayOfNames[i][0])
        {
            printf("%s\n",arrayOfNames[i]);
        }
	}

	printf("\n\n");
    
    printf("\nSIRNAMES STARTING WIITH '%c'\n",nameStart);

    for(i = 0; i < numberOfNames; i++)
    {
        sirNameStart = getSirNameChar(i);
        if(nameStart == sirNameStart)
        {
            printf("%s\n",arrayOfNames[i]);
        }
    }

    printf("\n\n");
}

char getSirNameChar(int index)
{
	int i = 0;
    char ch = '\0';

    for (i = 0; i < strlen(arrayOfNames[index]); i++) {
        if(arrayOfNames[index][i] == ' ' && arrayOfNames[index][i + 1] != ' ')
        {
            if((arrayOfNames[index][i + 1] >= 'A' && arrayOfNames[index][i + 1] <= 'Z') || (arrayOfNames[index][i + 1] >= 'a' && arrayOfNames[index][i + 1] <= 'z'))
            {
                ch = arrayOfNames[index][i + 1];
            }
            else
            {
                ch = '\0';
            }

        }
        
    }

	return(ch);
}

