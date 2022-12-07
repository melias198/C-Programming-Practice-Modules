#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    char word[100][100];
    for(int i=0;i<n;i++)
    {
      scanf("%s",&word[i]);
    } 
   for(int i=0;i<n;i++)
    {
      printf("%s ",word[i]);
    }
    return 0;
}

