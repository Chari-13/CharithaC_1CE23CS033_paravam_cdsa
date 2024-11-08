#include<stdio.h>
int main()
{
int x,y,*pointer1,*pointer2;
pointer1=&x;
pointer2=pointer1;
printf("pointer1 is:%d\n pointer2 is:%d",*pointer1,*pointer2);
return 0;
}