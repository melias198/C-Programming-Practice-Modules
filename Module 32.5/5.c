#include<stdio.h>

int solve(int n)
{
    if(n==0)
    return 0;
    int s=solve(n-1);
    return s+n;
}

int main()
{
    int n;
    scanf("%d",&n);
    int s=solve(n);
    printf("%d",s);
    return 0;
}

