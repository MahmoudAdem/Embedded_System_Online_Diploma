/* C program to store Information (name , roll and Marks) of a student using structure */

#include <stdio.h>

struct SData
{
    char Name[50];
    int Roll;
    float Mark;
};
typedef struct SData SData;


void main(void)
{
    SData Student_List[50];
    int num , i;
    
    printf("Enter Number of Students: ");
    scanf("%d",&num);

    for(i = 0 ; i < num ; i ++)
    {
        printf("Enter Name (Student_%d): ",(i + 1));
        scanf("%s",Student_List[i].Name);
        printf("Enter Roll (Student_%d): ",(i + 1));
        scanf("%d",&(Student_List[i].Roll));
        printf("Enter mark (Student_%d): ",(i + 1));
        scanf("%f",&(Student_List[i].Mark));
    }
    i = 0;

    printf("\nDisplaying Information\n");
    for(i = 0 ; i < num ; i ++)
    {
        printf("Student_%d:_ \n",(i + 1));
        printf("\tname: %s\n",Student_List[i].Name);
        printf("\tRoll: %d\n",Student_List[i].Roll);
        printf("\tMarks: %0.2f\n",Student_List[i].Mark);
    }
}