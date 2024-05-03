//Write a program in C to show a pointer to an array which contents are pointer to structure.

#include <stdio.h>

typedef struct
{
    char Emplopee_Name[50];
    int Employeee_Id;
}SEmployee;


void main(void)
{
    SEmployee *(*ptr)[2];
    SEmployee Member_1;

    (*ptr)[0] = &Member_1;

    printf("Enter Employee Name : ");
    scanf("%s",((*ptr)[0] -> Emplopee_Name));
    printf("Enter Employee ID : ");
    scanf("%d",&((*ptr)[0] -> Employeee_Id));

    printf("Employee Name : ");
    printf("%s\n",((*ptr)[0] -> Emplopee_Name));
    printf("Employee ID : ");
    printf("%d",((*ptr)[0] -> Employeee_Id));
}