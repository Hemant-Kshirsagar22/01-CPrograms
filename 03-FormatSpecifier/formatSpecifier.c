#include <stdio.h>

char cVariable = 'C';
int iVariable = 10;
float fVariable = 10.00f;
double dVariable = 10.0000;
signed char scVariable = 'D';
unsigned char ucVariable = 'R';
signed int siVariable = 10;
unsigned int uiVariable = 10;
short int shVariable = 10;
signed short int sshiVariable = 10;
unsigned short int ushiVaribale = 10;
long int liVariable = 100;
signed long int sliVariable = 101;
unsigned long int uliVariable = 1001;
long double ldVariable = 100.10;
long long int lliVariable = 1000;
signed long long int slliVariable=1000;
unsigned long long int ulliVariable=1000;

int main(void)
{
	printf("char format specifier is    			%%c      value=%c\n",cVariable);
	printf("int format specifier is     			%%d      value=%d\n",iVariable);
	printf("float format specifier is   			%%f      value=%f\n",fVariable);
	printf("double format specifier is 			%%lf     value=%lf\n",dVariable);
	printf("signed char format specifier is 		%%c 	value=%c\n",scVariable);
	printf("unsigned char format specifier is 		%%C 	value=%c\n",ucVariable);
	printf("signed int format specifier is			%%d 	value=%d\n",siVariable);
	printf("unsigned int format specifier is 		%%d 	value=%d\n",uiVariable);
	printf("short int format specifier is		        %%hd 	value=%hd\n",siVariable);
	printf("signed short int format specifier is 		%%hd 	value=%hd\n",sshiVariable);
	printf("unsigned short int format specifier is 		%%hu 	value=%hu\n",ushiVaribale);
	printf("long int format specifier is 			%%ld  	value=%ld\n",liVariable);
	printf("signed long int format specifer is 		%%ld 	value=%ld\n",sliVariable);
	printf("unsigned long int format specifer is 		%%lu 	value=%lu\n",uliVariable);
	printf("long double format specifier is 		%%Lf 	value=%Lf\n",ldVariable);
	printf("long long int format specifier is	        %%lld 	value=%lld\n",lliVariable);
	printf("signed long long int format specifier is        %%lld 	value=%lld\n",slliVariable);
	printf("unsigned long long int format specifier is 	%%llu 	value=%llu\n",ulliVariable);

	return(0);
}
