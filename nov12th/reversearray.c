// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int arr[10]={0,10,20,30,40,50,60,70,80,90};
     int i,a=10;
     printf("Original array is:\n");
     for(i=0;i<a;i++)
     printf(" %d ",arr[i]);
     printf("\n Reversed array is:\n");
     
     for(i=a-1;i>=0;i--)
     {
         printf(" %d ",arr[i]);
         
     }
     
    return 0;
}