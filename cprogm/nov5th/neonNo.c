#include <stdio.h>
int main() 
{
    int num,square,value,sum=0;
    printf("Enter the number");
    scanf("%d",&num);
    square=num*num;
    while(square!=0)
    {
    value=square %10;
    sum+=value;
    square/=10;
    }
    if(sum==num)
    {
        printf("%d is a neon number \n ",num);
    }
    else
    {
        printf("%d is not a neon number \n",num);
    }

    return 0;
}