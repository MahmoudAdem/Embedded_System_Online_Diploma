
/* Write C program to Find ASCII Value of a character */

#include <stdio.h>

void main(void)
{
    char x;
    
    printf("Enter a Character: ");
    scanf("%c",&x);
    getchar();
    printf("ASCII value of %c = %d",x,x);
}