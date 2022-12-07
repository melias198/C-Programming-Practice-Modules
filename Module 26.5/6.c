#include<stdio.h>
#include<string.h>

void print_upper_case(char a[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
         a[i]-=32;
        }
    }
    printf("%s",a);
}

int main()
{
    char s[100];
    scanf("%s",s);
    int len=strlen(s);
    print_upper_case(s,len);
    return 0;
}

