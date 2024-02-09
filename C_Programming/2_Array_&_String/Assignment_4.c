/* C program to insert an element in an Array */

#include <stdio.h>

void main(void)
{
    int size , element , location;
    printf("Enter no of elements: ");
    scanf("%d",&size);

    int arr[(size + 1)];
    for(int i = 0 ; i < size ; i ++)
        scanf("%d",&arr[i]);

    printf("Enter the element to be inserted: ");
    scanf("%d",&element);
    printf("Enter the location: ");
    scanf("%d",&location);

    for(int i = size ; i >= (location - 1) ; i --)
        arr[i] = arr[i - 1];

    arr[(location - 1)] = element;

    for(int i = 0 ; i <= size ; i ++)
        printf("%d\t",arr[i]);
}