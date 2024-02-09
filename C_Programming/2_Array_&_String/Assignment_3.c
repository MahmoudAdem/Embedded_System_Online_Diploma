/* This Program asks user to enter a matrix and this program finds transpose of it */

#include <stdio.h>

void main(void)
{
    int row , col;
    printf("Enter rows and columns of Matrix: ");
    scanf("%d %d",&row,&col);
    int matrix[row][col];
    int transpose[col][row];

    printf("Enter elements of matrix: \n");
    for(int i = 0 ; i < row ; i ++)
    {
        for(int j = 0 ; j < col ; j ++)
        {
            printf("Enter element a%d%d: ",(i + 1),(j + 1));
            scanf("%d",&matrix[i][j]);
        }
    }

    for(int i = 0 ; i < col ; i ++)
    {
        for(int j = 0 ; j < row ; j ++)
            transpose[i][j] = matrix[j][i]; 
    }

    printf("Entered Matrix:\n");
    for(int i = 0 ; i < row ; i ++)
    {
        for(int j = 0 ; j < col ; j ++)
            printf("%d\t",matrix[i][j]);
        printf("\n");
    }

    printf("Transpose Matrix:\n");
    for(int i = 0 ; i < col ; i ++)
    {
        for(int j = 0 ; j < row ; j ++)
            printf("%d\t",transpose[i][j]);
        printf("\n");
    }
}