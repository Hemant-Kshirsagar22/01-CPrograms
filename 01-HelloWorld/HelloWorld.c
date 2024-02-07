// # is use as preprocessor Derective.
// include is use for include the header file (Header file is a file that contains declarations of functions).
// <> (angluar brackets) : this indecates that the we want to include header file which is stored in standard include path.
// stdio.h : this is one of the standard header file contains printf() function that we are going to use. 
#include <stdio.h>

// following is the entry point function (i.e. int main(void)). int is the return type of the function.
// void specify that there will be no any argument or parameter. argument or parameter is the input for that function
int main(void) 
{ // { specify opening of main() body.

	// printf() this function is used for displaying constant string on terminaland returns number of character print
	//\n is escape sequence it is for format the string \n indecates new line
	printf("Hello World !!!\n");

	// return keyword is used to return the value to the function whichever calls that function 
	// In this case main() is called by Operating System we return 0 to OS as successfull execution 
	return(0);
} // } specify end of main() body.

