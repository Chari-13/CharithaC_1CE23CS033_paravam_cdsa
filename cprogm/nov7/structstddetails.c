#include<stdio.h>
struct Student
{
    char name[50];
    char usn[15];
    int marks[3];
    int total;
    float average;
    char branch[50];
    float percentage;
};
int main()
{
    struct Student student;
    printf("Enetr student name:");
    scanf("%s",student.name);
    printf("Enter student USN:");
    scanf("%s",student.usn);
    printf("Enter student brach:");
    scanf("%s",student.branch);
    student.total=0;
    for(int i=0;i<3;i++)
    {
        printf("Enter marks for subject %d:",i+1);
        scanf("%d",&student.marks[i]);
        student.total+=student.marks[i];
    }
    student.average=student.total/3;
    student.percentage=(float)student.total/300*100;
    printf("----STUDENT DETAILS----");
    printf("Name:%s\n",student.name);
    printf("USN:%s\n",student.usn);
    printf("Branch:%s\n",student.branch);
    printf("Total marks:%d\n",student.total);
    printf("Percentage:%.2f\n",student.percentage);
    printf("Average Marks:%.2f\n",student.average);
    if(student.average>=40)
    {
        printf("Result:Passed\n");
    }
    else{
        printf("Result:Failed\n");
    }
    return 0;
}