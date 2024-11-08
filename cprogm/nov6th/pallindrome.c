#include<stdio.h>
#include<string.h>
int main()
{
    char length[20];
    printf("Enter a string:");
    scanf("%s",&length);
    for(int i=0;i<strlen(length)-1;i++)
    {
        if(length[i]!=length[strlen(length)-i-1])
        {
            printf("is not a palindrome");
            break;
        }
        else
        {
            printf("is pallindrome");
            break;
        }
    }
    return 0;
}