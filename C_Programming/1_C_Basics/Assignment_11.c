/* Write C program to Check whether a Number is positive or nagative */

#include <stdio.h>

void main(void)
{
    float x;
    printf("Enter a Number: ");
    scanf("%f",&x);

    if(x > 0)
        printf("%f is positive.",x);
    else if(x == 0)
        printf("you entered Zero");
    else
        printf("%f is Negative",x);
}