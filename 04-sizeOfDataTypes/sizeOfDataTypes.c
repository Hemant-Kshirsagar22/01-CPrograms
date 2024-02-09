#include <stdio.h>

int main(void)
{
	// sizeof() : This function returns sizeof the given datatype.
	printf("size of character is 			  %d byte\n",sizeof(char));
	printf("size of integer is 			  %d bytes\n",sizeof(int));
	printf("size of float is 			  %d bytes\n",sizeof(float));
	printf("size of double is 			  %d bytes\n",sizeof(double));
	printf("size of signed char is 			  %d byte\n",sizeof(signed char));
	printf("size of signed int is 			  %d bytes\n",sizeof(signed int));
	printf("size of unsigned char is 		  %d byte\n",sizeof(unsigned char));
	printf("size of unsigend int is 		  %d bytes\n",sizeof(unsigned int));
	printf("size of short int is 			  %d bytes\n",sizeof(short int));
	printf("size of signed short int is 		  %d bytes\n",sizeof(signed short int));
	printf("size of unsigned short int is 		  %d bytes\n",sizeof(unsigned short int));
	printf("size of long int is 			  %d bytes\n",sizeof(long int));
	printf("size of signed long int is 		  %d bytes\n",sizeof(signed long int));
	printf("size of unsigned loong int is 		  %d bytes\n",sizeof(unsigned long int));
	printf("size of long long int is 		  %d bytes\n",sizeof(long long int));
	printf("size of signed long long int is 	  %d bytes\n",sizeof(signed long long int));
	printf("size of unsigend long long int is 	  %d bytes\n",sizeof(unsigned long long int));
	printf("size of long double is 			  %d bytes\n",sizeof(long double));
	return(0);
}