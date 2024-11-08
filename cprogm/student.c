#include<stdio.h>
int main()
{
    char name[20],usn[10];
    int sem,sub1,sub2,sub3;
    float sum=0.0,avg=0.0;
    printf("Enter the student name:");
    scanf("%s",name);
    printf("Enetr the usn:");
    scanf("%s",usn);
    printf("Enter the semester:");
    scanf("%d",&sem);
    printf("Enetr marks for three subjects:");
    scanf("%d %d %d",&sub1,&sub2,&sub3);
    sum=sub1+sub2+sub3;
    avg=sum/3;
    printf("----STUDENT DETAILS----\n");
    printf("Student name:%s\n",name);
    printf("USN:%s\n",usn);
    printf("Semester:%d\n",sem);
    printf("Total marks:%f\n",sum);
    printf("Average percentage:%f\n",avg);
    return 0;
}