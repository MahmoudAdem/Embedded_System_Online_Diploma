/* Write C program to Calculate Sum of Natural Numbers */

#include <stdio.h>

void main(void)
{
    int num;
    long long sum = 0;
    printf("Enter an Integer: ");
    scanf("%d",&num);

    for(int i = 1 ; i <= num ; i ++)
        sum += i;

    printf("Sum = %d",sum);
}