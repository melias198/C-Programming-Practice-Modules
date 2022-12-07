#include<stdio.h>

int summation_of_number(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return n+summation_of_number(n-1);
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    int ans=summation_of_number(n);
    printf("%d",ans);

    return 0;
}

