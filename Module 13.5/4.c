#include<stdio.h>

int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int s1[row][col],s2[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&s1[i][j]);
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&s2[i][j]);
        }
    }
    for(int i=0;i<row-1;i++)
    {
        printf("\n");
        for(int j=0;j<col;j++)
        {
           printf("%d ",s1[i][j]+s2[i][j]);
        }
        printf("\n");
    }
    for(int i=1;i<=row-1;i++)
    {
        for(int j=0;j<col;j++)
        {
           printf("%d ",s1[i][j]+s2[i][j]);
        }
    }

    return 0;
}

