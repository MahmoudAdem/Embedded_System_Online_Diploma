//Write a program in C to demonstrate how to handle the pointers in the program.

#include <stdio.h>

void main()
{
    int m = 29;
    int * ab = NULL;

    printf("Address of m : 0x%p\n",&m);
    printf("Value of m : %d\n\n",m);

    printf("Now ab is assigned with the address of m.\n");
    ab = &m;
    printf("Address of pointer ab : 0x%p\n",ab);
    printf("Content of pointer ab : %d\n\n",(*ab));

    printf("The Value of m assigned to 34 now.\n");
    m = 34;
    printf("Address of pointer ab : 0x%p\n",ab);
    printf("Content of pointer ab : %d\n\n",(*ab));

    printf("The pointer variable ab is assigned with the value 7 now.\n");
    (*ab) = 7;
    printf("Address of m : 0x%p\n",&m);
    printf("Value of m : %d\n",m);
}