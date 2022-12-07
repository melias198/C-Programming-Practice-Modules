#include<stdio.h>

int main()
{
   int n,i,chessboard[4][4],a,b,count=0;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
    scanf("%d%d",&a,&b);
    chessboard[a][b]=1;
   }
   count=9-n;
   printf("Total empty cell - %d\n",count);
   for(i=1;i<4;i++)
   {
    for(int j=1;j<4;j++)
    {
      if(chessboard[i][j]!=1)
      {
        printf("%d %d\n",i,j);
      }
    }
   }
    return 0;
}

