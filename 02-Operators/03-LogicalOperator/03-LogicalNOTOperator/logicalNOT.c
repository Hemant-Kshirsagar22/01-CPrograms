#include <stdio.h>

int numberOne = 0;

int result = 0;

int main(void)
{
	printf("Enter Number : ");
	scanf("%d",&numberOne);

/*
	| Input | Output |
	|   0   |    1   |
	|   1   |    0   |


*/
	result = !numberOne;
	printf("!%d = %d\n",numberOne,result);

	return(0);
}