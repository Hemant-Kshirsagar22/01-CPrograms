#include <stdio.h>

int numberOne = 0;
int numberTwo = 0;
int result = 0;

int main(void)
{
	printf("Enter First Number : ");
	scanf("%d",&numberOne);

	printf("Enter Second Number : ");
	scanf("%d",&numberTwo);

	result = numberOne % numberTwo;

	printf("Remaider : %d\n",result);

	return(0);
}

