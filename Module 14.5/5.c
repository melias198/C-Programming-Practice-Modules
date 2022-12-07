#include <stdio.h>

int main()
{
  int n, a, b, i, j;
  int chessboard[8][8];
  scanf("%d", &n);

  for (int i = 0; i < n; i++)
  {
    scanf("%d %d", &a, &b);
    chessboard[a][b] = 1;
  }
  int count;
  for (i = 0; i < 8; i++)
  {
    count = 0;
    for (j = 0; j < 8; j++)
    {
      if (chessboard[i][j] == 1)
      {
        count++;
      }
    }
    if(count>1)
    {
      printf("Safe roks - %d\n",n-count);
    }
    
    for (j = 0; j < 8; j++)
    {
      if (count == 1 && chessboard[i][j] == 1)
      {
        printf("%d %d\n", i, j);
      }
    }
  }
  return 0;
}
