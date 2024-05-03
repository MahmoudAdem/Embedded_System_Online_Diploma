//Write a program in C to print a string in reverse using a pointer

#include <stdio.h>

void main(void)
{
    char Str[100] = {'\0'};
    char *ptr = NULL;
    int i = 0 , j = 0;
    printf("Input a String: ");
    scanf("%[^\n]s",Str);
    getchar();

    while(Str[i] != '\0')
        i ++;
    
    ptr = &Str[i - 1];
    printf("Reverse of the String is : ");
    for( ; j < i ; j ++)
        printf("%c",*(ptr - j));
}