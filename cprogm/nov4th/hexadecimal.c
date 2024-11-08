#include<stdio.h>
int main()
{
    int n;
    printf("Enter a hexadecimal value:");
    scanf("%x",&n);
    printf("Decimal:%5d\n",n);
    printf("Octal:%5o\n",n);
    printf("Hexadecimal:%5X\n",n);
}