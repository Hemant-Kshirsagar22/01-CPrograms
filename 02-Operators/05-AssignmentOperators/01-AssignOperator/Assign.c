#include <stdio.h>

int numberOne; 

int main(void)
{
	/*
		Assign (=) operator :
		at left side of assign operator there will always variable assign operator access L Value Of left operand and right side there will any variable or direct value if there is variable at right side assign operator access R Value of that variable 

ex : 
		------
		| 10 |
		------
	  1000	

	  in above diagrame 10 is the R Value and 1000 is L Value

	  L value is the address of the varibale 
	  R value is the actual data.
	*/
	numberOne = 10;

	printf("numberOne = %d\n",numberOne);
	
	return(0);
}
