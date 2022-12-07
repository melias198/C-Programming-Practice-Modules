#include<stdio.h>
#include<limits.h>
void input_array(int arra[],int n)
{
     for(int i=0;i<n;i++)
    {
        scanf("%d",&arra[i]);
    }
}
int maximum_array(int arra[],int n)
{
     int max= INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arra[i]>max)
        max=arra[i];
    }
    return max;
}
void arrange_array(int max,int arra[],int n)
{
int new_arra[max+1];
    for(int i=0;i<=max;i++)
    {
        new_arra[i]=0;
    }

    for(int i=0;i<n;i++)
    {
        new_arra[arra[i]]++;
    }

    for(int i=0;i<=max;i++)
    {
       if(new_arra[i]>=1)
       {
        for(int j=1;j<=new_arra[i];j++)
        {
            printf("%d ",i);
        }
       }
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    int arra[n];
    input_array(arra,n);
    int max=maximum_array(arra,n);
    arrange_array(max,arra,n);
    return 0;
}

