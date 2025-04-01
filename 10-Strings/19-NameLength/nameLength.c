#include <stdio.h>

char stringOne[255] = { '\0' };
int nameLength[10] = { 0 };
int nameCount = 0;

int main(void)
{
	void printNameLength(void);

	printf("Enter The Name : ");
	gets(stringOne);

	printNameLength();

	return(0);
}

void printNameLength(void)
{
	int i = 0;
	
	for(i = 0; stringOne[i] != '\0'; i++)
	{
		if(stringOne[i] == ' ')
		{
			nameCount = nameCount + 1;
		}
		else
		{
			nameLength[nameCount] = nameLength[nameCount] + 1;
		}
	}

	for(i = 0; i <= nameCount;i++)
	{
		printf("Name %d Length : %d\n",i + 1,nameLength[i]);
	}
}
