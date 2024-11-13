#include<stdio.h>
int main()
{
    char cha;
    int x,y;
    printf("Enter your choice:");
    scanf("%c",&cha);
    printf("Enter value for x:\n" );
    scanf("%d",&x);
    printf("Enter the value for y:\n");
    scanf("%d",&y);
    switch(cha)
    {
    case 'a':
    printf("Add two numbers\n");
    printf("%d",x+y);
    break;
    case 'm':
    printf("Multiply two numbers\n");
    printf("%d",x*y);
    break;
    case 's':
    printf("Subtract two numbers\n");
    printf("%d",x-y);
    break;
    case 'd':
    printf("Divide a number\n");
    printf("%d",x/y);
    break;
    default:
    printf("Invalid choice!!");
    break;
    }
    return 0;


}