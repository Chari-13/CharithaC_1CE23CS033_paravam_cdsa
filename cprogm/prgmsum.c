#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("enter the number:");
    scanf("%d",&n);
    for(int i;i<=1;i+1)
    {
        sum=sum+i;
        printf("the summation is:%d",sum);
    }
    return 0;
}