#include<stdio.h>

int numberOne = 10;

int main(void)
{
	printf("Address of numberOne using %%p : %p\n",&numberOne);
	printf("address of numberOne Using %%d : %d\n",&numberOne);
	printf("Address of numberOne using %%x : %x\n",&numberOne);
	printf("Address of numberOne using (int) : %d\n",(int)&numberOne);
	return(0);
}
