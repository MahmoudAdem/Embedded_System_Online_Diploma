/* Write C program to calculate Factorial of number using Recursion */

#include <stdio.h>

unsigned long long int Get_Factorial(int num);

void main(void)
{
    int num;
    printf("Enter a positive integer:  ");
    scanf("%d",&num);

    printf("Factorial of %d: %llu",num,Get_Factorial(num));
}


unsigned long long int Get_Factorial(int num)
{
    if((num == 0) || (num == 1))
        return 1;
    else if(num > 1)
        return (num * Get_Factorial((num - 1)));
    else
        return 0;
}