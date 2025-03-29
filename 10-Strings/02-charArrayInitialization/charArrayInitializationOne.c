#include <stdio.h>

char stringOne[15] = {'H','e','l','l','o',' ','W','o','r','l','d','!','!','!','\0'};
int numberOne = 0;

int main(void)
{
    printf("\n");
    
    for (numberOne = 0; numberOne < 15; numberOne++)
    {
        printf("%c",stringOne[numberOne]);
    }
    
    printf("\n\n");
    return(0);
}
