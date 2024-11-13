#include<stdio.h>
int main()
{
    char n;
    printf("Enetr a character:");
    scanf("%c",&n);
    if((n>='A')&&(n<='Z')){
    printf("It's Uppercase");
    }
    else if((n>='a')&&(n<='z')){
        printf("It's Lowercase");
    }
    else{
        printf("It's a Special Character");
    }

}