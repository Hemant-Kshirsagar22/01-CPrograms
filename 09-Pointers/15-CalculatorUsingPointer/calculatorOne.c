#include <stdio.h>

int main(void)
{
	// function declarations
	void addition(float,float,float*);
	void subtraction(float,float,float*);
	void multiplication(float,float,float*);
	void division(float,float,float*);

	// variable declarations
	float numberOne = 0.0f;
	float numberTwo = 0.0f;
	float result = 0.0f;

	// code
	printf("Enter First Number : ");
	scanf("%f",&numberOne);

	printf("Enter Second Number : ");
	scanf("%f",&numberTwo);

	addition(numberOne,numberTwo,&result);
	printf("%.2f + %.2f = %.2f\n", numberOne,numberTwo,result);

	subtraction(numberOne,numberTwo,&result);
	printf("%.2f - %.2f = %.2f\n",numberOne,numberTwo,result);

	multiplication(numberOne,numberTwo,&result);
	printf("%.2f * %.2f = %.2f\n",numberOne,numberTwo,result);

	division(numberOne,numberTwo,&result);
	printf("%.2f / %.2f = %.2f\n",numberOne,numberTwo,result);

	return(0);
}

void addition(float numberOne, float numberTwo, float *result)
{
	*result = numberOne + numberTwo;
}

void subtraction(float numberOne, float numberTwo, float *result)
{
	*result = numberOne - numberTwo;
}

void multiplication(float numberOne, float numberTwo, float *result)
{
	*result = numberOne * numberTwo;
}

void division(float numberOne, float numberTwo, float *result)
{
	*result = numberOne / numberTwo;
}

