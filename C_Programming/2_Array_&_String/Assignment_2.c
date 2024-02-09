/* This program takes n number of element from user, stores data in an array and calculates 
   The Average of those numbers */

#include <stdio.h>

void main(void)
{
    int n;
    printf("Enter the numbers of data: ");
    scanf("%d",&n);
    float arr[n] , sum = 0.0;

    for(int i = 0 ; i < n ; i ++)
    {
        printf("%d. Enter number: ",(i + 1));
        scanf("%f",&arr[i]);
        sum += arr[i];
    }

    printf("Average = %.2f",(sum / n));
}