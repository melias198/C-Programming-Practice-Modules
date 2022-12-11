#include<stdio.h>

int solve(int n,int m)
{
    if(m==1)
    return n;
    int s=solve(n,m-1);
    return s*n;
}

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int s=solve(n,m);
    printf("%d",s);
    return 0;
}

