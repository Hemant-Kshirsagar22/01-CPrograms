#include <stdio.h>

#define TRUE 1

int main(void)
{
	void add(int,int,int*);
	void sub(int,int,int*);
	void mul(int,int,int*);
	void div(int,int,int*);

	int numberOne = 0;
	int numberTwo = 0;
	int result = 0;
	int choice = 0;

	while(TRUE)
	{
		printf("Enter First Number : ");
		scanf("%d",&numberOne);

		printf("Enter Second Number : ");
		scanf("%d",&numberTwo);

		printf("\t\t\tMENU\n");
		printf("1 : Addition\n2 : Subtraction\n3 : Multiplication\n4 : Division\n5 : Exit\nEnter Your Choice : ");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:
				add(numberOne, numberTwo, &result);
				printf("%d + %d = %d\n\n",numberOne, numberTwo, result);
				break;

			case 2:
				sub(numberOne,numberTwo,&result);
				printf("%d - %d = %d\n\n",numberOne,numberTwo,result);
				break;

			case 3:
				mul(numberOne,numberTwo,&result);
				printf("%d * %d = %d\n\n",numberOne, numberTwo, result);
				break;
				
			case 4:
				div(numberOne,numberTwo,&result);
				printf("%d / %d = %d\n",numberOne,numberTwo,result);
				break;

			case 5:
				return(0);
				break;
				
		}
	}

	return(0);
}

void add(int numberOne, int numberTwo, int *result)
{
	*result = numberOne + numberTwo;
}

void sub(int numberOne, int numberTwo, int *result)
{
	*result = numberOne - numberTwo;
}

void mul(int numberOne, int numberTwo, int *result)
{
	*result = numberOne * numberTwo;
}

void div(int numberOne, int numberTwo, int *result)
{
	*result = numberOne / numberTwo;
}
