/* Write C program to Calculate the power a number using Recursion */

#include <stdio.h>
typedef unsigned long long int U64;
U64 Get_Power_Of_Number(int base , int power);

void main(void)
{
    int base , power;
    U64 Result;

    printf("Enter Base number: ");
    scanf("%d",&base);
    printf("Enter power number (positive integer): ");
    scanf("%d",&power);

    Result = Get_Power_Of_Number(base,power);

    printf("%d^%d = %llu",base,power,Result);
}


U64 Get_Power_Of_Number(int base , int power)
{
    if(power > 1)
        return ((U64)base * Get_Power_Of_Number(base , (power - 1)));
    else if(power == 1)
        return base;
    else
        return 1;

}