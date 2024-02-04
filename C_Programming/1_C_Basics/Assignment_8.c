/* Write C program to Check whether a Number is even or Odd */

#include <stdio.h>

void main(void)
{
    int num;
    printf("Enter an integer you want to check: ");
    scanf("%d",&num);
    printf("%d is %s", num , ((num % 2 == 0) ? "even" : "odd"));
}