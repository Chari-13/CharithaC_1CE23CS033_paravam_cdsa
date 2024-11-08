#include<stdio.h>
int main()
{
    int i, n,sum;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        sum=sum+i;    
    }
    printf("the summation is:%d",sum);
    return 0;
}