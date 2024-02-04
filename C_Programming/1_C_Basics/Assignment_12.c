/* Write C program to Check Whether a character is an Alphabet or not */

#include <stdio.h>

void main(void)
{
    signed char alpha;
    printf("Enter a character: ");
    scanf("%c",&alpha);
    getchar();

    if(((alpha >= 'A') && (alpha <= 'Z')) || ((alpha >= 'a') && (alpha <= 'z')))
        printf("%c is an alphabet",alpha);
    else
        printf("%c is not an alphabet",alpha);
}