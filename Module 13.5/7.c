#include<stdio.h>

int main()
{
    int m,n,s1[100005],s2[100005];
    scanf("%d %d",&m,&n);
    for(int i=0;i<m;i++)
    {
        scanf("%d",&s1[i]);
    }
     for(int i=0;i<n;i++)
    {
        scanf("%d",&s2[i]);
    }
    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=0;j<m;j++)
        {
            if(s1[j]<s2[i])
            {
             count++;
            }
        }
        printf("%d ",count);
    }
    return 0;
}

