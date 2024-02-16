/* Write C program to reverse a Sentence Using Recursion */

#include <stdio.h>

void Print_String_In_Reverse(char * String);

void main(void)
{
    char Sen[50];
    printf("Enter a Sentence: ");
    scanf("%[^\n]s",Sen);

    Print_String_In_Reverse(Sen);
}

void Print_String_In_Reverse(char * String)
{
    if(String[0] != '\0')
    {
        Print_String_In_Reverse((String + 1));
        printf("%c",String[0]);
    }
}