/* C program to Add Two compleax Numbers by passign Structure to Function */

#include <stdio.h>
struct complex
{
    float real;
    float imag;
};

typedef struct complex complex;

complex Sum(complex , complex);

void main(void)
{
    complex num1 , num2 , res;

    printf("For 1st complex number:\n");
    printf("Enter real and Imaginary respectively: ");
    scanf("%f %f",&num1.real,&num1.imag);

    printf("For 2nd complex number:\n");
    printf("Enter real and Imaginary respectively: ");
    scanf("%f %f",&num2.real,&num2.imag);

    res = Sum(num1 , num2);

    printf("Sum = %.1f + %.1fi",res.real,res.imag);
}

complex Sum(complex num1 , complex num2)
{
    complex res;

    res.real = num1.real + num2.real;
    res.imag = num1.imag + num2.imag;

    return res;
}