#include<stdio.h>

int main()
{
    long long int t;
    scanf("%lld",&t);
    for(int j=0;j<t;j++)
    {


    int n,viewrs[100],upvote=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
       scanf("%d",&viewrs[i]);
       if(viewrs[i]==1 || viewrs[i]==3)
       {
        upvote++;
       }

    }
   printf("%d\n",upvote);

    }

    return 0;
}



