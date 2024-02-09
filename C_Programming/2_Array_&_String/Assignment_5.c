/* C program to search an element in array */

#include <stdio.h>

void main(void)
{
    int size , element;
    printf("Enter no of elements: ");
    scanf("%d",&size);

    int arr[size];
    for(int i = 0 ; i < size ; i ++)
        scanf("%d",&arr[i]);

    printf("Enter the elements to be searched: ");
    scanf("%d",&element);

    int i = 0;
    for( ; i < size ; i ++)
    {
        if(element == arr[i])
            break;
    }

    if(i != size)
        printf("Number is found at the location = %d",(i + 1));
    else
        printf("The Number not found");
}