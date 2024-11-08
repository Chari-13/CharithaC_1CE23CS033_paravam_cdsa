#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if((n>=10)&&(n<=20))
    {
        if(n%2==0)
        {
            printf("N is even");
        }
        else
        {
            printf("N is odd");
        }
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
    return 0;
}