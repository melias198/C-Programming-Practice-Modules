#include<stdio.h>

int solve(int arra[],int n)
{
    if(n==0)
    return 0;
    int s=solve(arra+1,n-1);
    return s + *(arra)%10;
}

int main()
{
    int n;
    scanf("%d",&n);
    int arra[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arra[i]);
    }
    int s=solve(arra,n);
    printf("%d",s);
    return 0;
}

