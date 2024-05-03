//Write a program in C to print all the alphabets using a pointer. Go to the editor


#include <stdio.h>

void main()
{
    char * ptr = NULL;
    char Alpha = 'A';

    ptr = &Alpha;
    for(int i = 0 ; i < 26 ; i ++)
        printf("%c ",(*ptr)++);
}