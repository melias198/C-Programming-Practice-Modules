#include<stdio.h>
void sum_of_twodigit(int n,int arra[]);

int main()
{
    int n;
    scanf("%d",&n);
    int arra[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arra[i]);
    }
    sum_of_twodigit(n,arra);
    
    return 0;
}

void sum_of_twodigit(int n,int arra[])
{
    int sum1=0,sum2=0;
    for(int i=0;i<n;i++)
    {
        sum1+=arra[i]%10;
        sum2+=(arra[i]/1000)%10;
    }
    printf("%d",sum1+sum2);
}


