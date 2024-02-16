/* Write C program to print Prime Numbers between to Intervals */

#include <stdio.h>

unsigned char Check_Prime_number(int number);

void main(void)
{
    int first , End;
    printf("Enter two Numbers(interval): ");
    scanf("%d %d",&first,&End);

    printf("Prime numbers between %d and %d are: ",first,End);
    for(int i = first ; i <= End ; i ++)
    {
        if(1 == Check_Prime_number(i))
            printf("%d ",i);
    }
}

unsigned char Check_Prime_number(int number)
{
    for(int i = (number / 2) ; i > 1 ; i --)
    {
        if((number % i) == 0)
            return 0;
    }
    return 1;
}