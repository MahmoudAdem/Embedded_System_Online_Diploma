/* C program to Add Two Distance (in inch , feet) System Using Structures */

#include <stdio.h>

struct SDistance
{
    int feet;
    float inch;
};
typedef struct SDistance SDistance;

void main(void)
{
    SDistance D1 , D2;
    printf("Enter information for 1st distance:\n");
    printf("\tEnter feet: ");
    scanf("%d",&(D1.feet));
    printf("\tEnter inch: ");
    scanf("%f",&(D1.inch));
    printf("Enter information for 2nd distance:\n");
    printf("\tEnter feet: ");
    scanf("%d",&(D2.feet));
    printf("\tEnter inch: ");
    scanf("%f",&(D2.inch));

    if((D1.inch + D2.inch) < 12.0)
        printf("Sum of distance = %d\' %0.1f\"",(D1.feet + D2.feet) , (D1.inch + D2.inch));
    else
        printf("Sum of distance = %d\' %0.1f\"",(D1.feet + D2.feet + 1) , (D1.inch + D2.inch - 12.0));
}