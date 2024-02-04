/* Write C Program to Find Factorial of a number*/

#include <stdio.h>

void main(void)
{
    int num;
    unsigned long long Result = 1;

    printf("Enter an integer: ");
    scanf("%d",&num);

    if(num == 0)
        printf("Factorial = 1");
    else if(num < 0)
        printf("Error!!! Factorial of negative number doesn't exist.");
    else
    {
        for(int i = 1 ; i <= num ; i++)
            Result *= i;
        printf("Factorial = %d",Result);
    }
}