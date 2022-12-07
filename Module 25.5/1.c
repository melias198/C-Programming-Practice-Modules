#include<stdio.h>

void less_or_greater(int arra[],int n)
{
  int k,count=0;
  scanf("%d",&k);
  for(int i=0;i<n;i++)
{
    if(arra[i]>k || arra[i]<k)
    count++;
}
printf("%d",count);
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

    less_or_greater(arra,n);

    return 0;
}

