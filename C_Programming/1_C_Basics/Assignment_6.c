
/* Write Source Code to swap two numbers */

#include <stdio.h>

void main(void)
{
    float a , b , template;

    printf("Enter value of a: ");
    scanf("%f",&a);
    printf("Enter value of b: ");
    scanf("%f",&b);

    template = a;
    a = b;
    b = template;

    printf("After swaping, value of a = %.2f\n",a);
    printf("After swaping, value of b = %.2f\n",b);
}