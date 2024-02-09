/* C program to find the Frequency of characters in String */

#include <stdio.h>

int main(void)
{
    char Str[100] = {'\0'};
    char c = '\0';
    unsigned char counter = 0;
    printf("Enter a String: ");
    scanf("%[^\n]s",Str);
    getchar();
    printf("Enter a Character to find frequency: ");
    scanf("%c",&c);

    for(int i = 0 ; Str[i] != '\0' ; i ++)
    {
        if(c == Str[i])
            counter ++;
    }

    printf("Frequency of %c = %d",'e',counter);
    return 0;
}