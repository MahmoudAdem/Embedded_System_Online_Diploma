//Write a program in C to print the elements of an array in reverse order.

#include <stdio.h>

void main(void)
{
    int arr[15];
    int N , * ptr;
    
    printf("Input The Number of elements to store in the array (max 15): ");
    scanf("%d",&N);

    printf("Input %d numbers of element in the array:\n",N);
    ptr = arr;
    for(int i = 0 ; i < N ; i ++)
    {
        printf("element - %d: ",(i + 1));
        scanf("%d",(ptr + i));
    }

    printf("The elements of array in reverse order are: \n");
    for(int i = (N - 1) ; i >= 0 ; i -- )
        printf("element - %d : %d\n",(i + 1),*(ptr + i));
}