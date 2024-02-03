
/* Write C program to Multiply two floating point Numbers */

#include <stdio.h>

void main(void)
{
    float x , y;

    printf("Enter two numbers: ");
    scanf("%f %f",&x,&y);
    printf("Product: %f",((double)x * y));
}