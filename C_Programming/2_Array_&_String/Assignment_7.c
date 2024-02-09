/* C Program to Find Length of a String */

#include <stdio.h>

void main(void)
{
    char Str[100] = {'\0'};
    int length = 0 , i = 0;

    printf("Enter a String: ");
    scanf("%[^\n]s",Str);
    getchar();

    while(Str[i] != '\0')
    {
        length ++;
        i ++;
    }

    printf("Length of String: %d",length);
}