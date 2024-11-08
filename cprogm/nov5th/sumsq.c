#include<stdio.h>
int main()
{
    int n,n1=1,sum=0;
    printf("enter the number:");
    scanf("%d",&n);
    for(int i;i<=n;i++)
    {
        sum=sum+(i*i);
    }
        printf("%d \n",sum);
    return 0;
}