#include <stdio.h>

long double numberOne = 0.00;
long double numberTwo = 0.00;
long double result = 0.00;

int choice = 0;

int main(void)
{
	while(1)
	{
		printf("Enter First Number : ");
		scanf("%Lf",&numberOne);

		printf("Enter Second Number : ");
		scanf("%Lf",&numberTwo);


		while(1)
		{

		printf("             MENU\n");
		printf("01-Addition\n02-Subtraction\n03-Multiplication\n04-Division\n05-Exit\nEnter Your Choice : ");
		scanf("%d",&choice);
			if(choice >= 1 && choice <=5)
			{
				break;
			}
			else
			{
				printf("\n\nPlease Enter Correct Choice !!! \n\n");
			}
		}
		switch(choice)
		{
		case 1:
			result = numberOne + numberTwo;
			printf("\n\n%Lf + %Lf = %Lf\n\n",numberOne,numberTwo,result);
			break;

		case 2:
			result = numberOne - numberTwo;
			printf("\n\n%Lf - %Lf = %Lf\n\n",numberOne,numberTwo,result);
			break;

		case 3:
			result = numberOne * numberTwo;
			printf("\n\n%Lf * %Lf = %Lf\n\n",numberOne,numberTwo,result);
			break;

		case 4:
			result = numberOne / numberTwo;
			printf("\n\n%Lf / %Lf = %Lf\n\n",numberOne,numberTwo,result);
			break;

		case 5:
			return(0);
			break;

		default:
			
			break;
		}

	}

}