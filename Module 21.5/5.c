#include<stdio.h>
void solve_result(char ch,int x,int y);
int main()
{
    char ch;
    scanf("%c",&ch);
    int a,b;
    scanf("%d %d",&a,&b);
    solve_result(ch,a,b);

    return 0;
}

void solve_result(char ch,int x,int y)
{
    if(ch=='+')
    {
        printf("%d",x+y);
    }
    else if(ch=='-')
    {
        printf("%d",x-y);
    }
     else if(ch=='*')
    {
        printf("%d",x*y);
    }
     else if(ch=='/')
    {
        printf("%d",x/y);
    }
}