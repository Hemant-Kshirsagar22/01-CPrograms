#include <stdio.h>

int monthNumber = 0;
int main(void)
{
	printf("Enter number Of Month : ");
	scanf("%d",&monthNumber);

	/*
		syntax : 
		
		switch(<character/integer constant>)
		{
			case <integer/character>:
				berak;
				:
				: // here we can write n number of cases
				:
			default:
				break;
		}

	*/

	switch(monthNumber)
	{
	case 1:
		printf("\n\nJanuary\n\n");
		break;
	case 2:
		printf("\n\nFebruary\n\n");
		break;
	case 3:
		printf("\n\nMarch\n\n");
		break;
	case 4:
		printf("\n\nApril\n\n");
		break;
	case 5:
		printf("\n\nMay\n\n");
		break;
	case 6:
		printf("\n\nJune\n\n");
		break;
	case 7:
		printf("\n\nJuly\n\n");
		break;
	case 8:
		printf("\n\nAugust\n\n");
		break;
	case 9:
		printf("\n\nSeptember\n\n");
		break;
	case 10:
		printf("\n\nOctober\n\n");
		break;
	case 11:
		printf("\n\nNovember\n\n");
		break;
	case 12:
		printf("\n\nDecember\n\n");
		break;
	default:
		printf("\n\nInvalid Month Number !!!\n\n");
		break;
	}

	return(0);
}