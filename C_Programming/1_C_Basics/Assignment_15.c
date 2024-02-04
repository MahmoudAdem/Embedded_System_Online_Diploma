/* Write C program to make a simple calculator to add, subtract, multiply or Divide using switch case */

#include <stdio.h>

void main(void)
{
    char Op;
    float num1 , num2;

    printf("Enter Operator either + or - or * or /: ");
    scanf("%c",&Op);
    getchar();

    if(Op == '+')
    {
        printf("Enter two Operands: ");
        scanf("%f %f",&num1,&num2);

        printf("%.2f + %.2f = %.2f",num1,num2,(num1 + num2));
    }
    else if(Op == '-')
    {
        printf("Enter two Operands: ");
        scanf("%f %f",&num1,&num2);

        printf("%.2f - %.2f = %.2f",num1,num2,(num1 - num2));
    }
    else if(Op == '*')
    {
        printf("Enter two Operands: ");
        scanf("%f %f",&num1,&num2);

        printf("%.2f * %.2f = %.4f",num1,num2,((double)num1 * num2));
    }
    else if(Op == '/')
    {
        printf("Enter two Operands: ");
        scanf("%f %f",&num1,&num2);

        printf("%.2f / %.2f = %.4f",num1,num2,(num1 / num2));
    }
    else
        printf("undefined Operator.");
}