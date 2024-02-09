/* Write C program to find sum of two matrix of order 2*2 using Multidimensional arrays where 
   elements of matrix are entered by user */

#include <stdio.h>

void main(void)
{
    float arr1[2][2] , arr2[2][2] , sum[2][2];

    printf("Enter the elements of 1st matrix.\n");
    for(int i = 0 ; i < 2 ; i ++)
    {
        for(int j = 0 ; j < 2 ; j ++)
        {
            printf("Enter a%d%d: ",(i + 1),(j + 1));
            scanf("%f",&arr1[i][j]);
        }
    }

    printf("Enter the elements of 2nd matrix.\n");
    for(int i = 0 ; i < 2 ; i ++)
    {
        for(int j = 0 ; j < 2 ; j ++)
        {
            printf("Enter b%d%d: ",(i + 1),(j + 1));
            scanf("%f",&arr2[i][j]);
        }
    }

    for(int i = 0 ; i < 2 ; i ++)
    {
        for(int j = 0 ; j < 2 ; j ++)
            sum[i][j] = arr1[i][j] + arr2[i][j];
    }

    printf("Sum of Matrix: \n");
    for(int i = 0 ; i < 2 ; i ++)
    {
        for(int j = 0 ; j < 2 ; j ++)
            printf("%.2f\t",sum[i][j]);

        printf("\n");
    }
}