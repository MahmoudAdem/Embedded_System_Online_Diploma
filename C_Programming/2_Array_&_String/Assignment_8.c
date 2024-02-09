/* C program to reverse String without using library function */

#include <stdio.h>
#include <string.h>

void main(void)
{
    char Str[50] = {'\0'};
    char temp[50] = {'\0'};
    int length = 0;
    printf("Enter the string : ");
    scanf("%s",Str);

    length = strlen(Str);

    for(int i = (length - 1) ; i >= 0 ; i --)
        temp[(length - i - 1)] = Str[i];

    printf("Reverse String is : %s",temp);
}