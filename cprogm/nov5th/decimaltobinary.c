#include<stdio.h>
int main()
{
 int num,binary[32],m=0;
 printf("Enter a decimal number:");
 scanf("%d",&num);
 while(num>0)
 {
    binary[m]=num%2;
    num= num/=2;
    m++;
 }
 printf("binary representation:");
 for(int i=m-1;i>=0;i--)
 {
     printf("%d",binary[i]);
 }
 printf("\n");
 return 0;
}