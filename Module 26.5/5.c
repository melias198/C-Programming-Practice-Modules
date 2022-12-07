#include<stdio.h>
void sum_of_lastdigitzero(int ara[],int n)
{
    int ld,sum=0;
    for(int i=0;i<n;i++)
    {
      ld=ara[i]%10;
      if(ld==0)
      {
        sum+=ara[i];
      }
    }
    printf("%d",sum);
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
    sum_of_lastdigitzero(arra,n);

    return 0;
}
