#include<stdio.h>
#include<string.h>
void main()

{
    char str[100],index=0;
    printf("Enter a string:");
    scanf("%s",str);
    for(int i=0;str[i];i++)
    {
        for(int j=i+1;str[j];j++)
        if(str[i]==str[j])
        {
            for(int k=j;str[k];k++)
            {
                str[k]=str[k+1];
            }
            j--;
        }
        printf("%c",str[i]);
    }

}