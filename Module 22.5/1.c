#include<stdio.h>
#include<string.h>
int check_binary(char s[],int a);
int main(void)
{
    char s[100];
    scanf("%s",s);
    int n=strlen(s);
    int result = check_binary(s,n);
    if(result==1)
    printf("Yes");
    else
    printf("No");
    return 0;
}

int check_binary(char s[],int a)
{
    int i;
    for(i=0;i<a;i++)
    {
        if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z')
        {
            return 0;
        }
    }
    return 1;
}