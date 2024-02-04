/* Write C Program to Find The Largest Number among Three Numbers */

#include <stdio.h>

void main(void)
{
    float x , y ,z;
    printf("Enter three numbers:_ \n");
    scanf("%f %f %f",&x,&y,&z);

    if(x >= y)
    {
        if(x >= z)
            printf("The Largest number = %.3f",x);
        else
            printf("The Largest number = %.3f",z); 
    }
    else
    {
        if(y >= z)
            printf("The Largest number = %.3f",y);
        else
            printf("The Largest number = %.3f",z);
    }
}