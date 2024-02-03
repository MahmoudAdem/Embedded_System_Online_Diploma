
/* Write Source code to swap two numbers without temp */

#include <stdio.h>

void main(void)
{
    float a , b;

    printf("Enter Value of a: ");
    scanf("%f",&a);
    printf("Enter Value of b: ");
    scanf("%f",&b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swaping, value of a = %.2f\n",a);
    printf("After swaping, value of b = %.2f\n",b);
}