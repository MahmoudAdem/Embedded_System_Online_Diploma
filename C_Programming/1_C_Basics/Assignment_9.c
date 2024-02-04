/* Write C Program to check vowel or consonant character */

#include <stdio.h>

void main(void)
{
    char x;
    printf("Enter an alphabet: ");
    x = getchar();
    getchar();

    switch(x)
    {
        case 'a':
        case 'A':
        case 'o':
        case 'O':
        case 'i':
        case 'I':
        case 'u':
        case 'U':
        case 'e':
        case 'E':
            printf("%c is a Vowel.",x);
            break;
        default:
            printf("%c is a Consonant.",x);
            break;
    }
}