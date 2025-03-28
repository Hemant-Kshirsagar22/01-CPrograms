#include <stdio.h>

int main(void)
{
	int arrayOne[] = { 1, 2, 3, 4, 5 };
	int *pArrayOne = NULL;

	pArrayOne = arrayOne;

	printf("\n\nPointer Array Deaulity\n\n");

	printf("pArrayOne[0] = %d\n", pArrayOne[0]);
	printf("pArrayOne[1] = %d\n", pArrayOne[1]);
	printf("pArrayOne[2] = %d\n", pArrayOne[2]);
	printf("pArrayOne[3] = %d\n", pArrayOne[3]);
	printf("pArrayOne[4] = %d\n", pArrayOne[4]);

	printf("\n\n");
	return(0);
}
