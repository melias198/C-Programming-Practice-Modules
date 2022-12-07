#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int matrix[n][n];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j)
            {
                printf("row-%d and column-%d =  ", i, j);
                for (int k = 1; k <= n; k++)
                {
                    if (i == k)
                    {
                        continue;
                    }
                    printf(" %d", matrix[i][k]);
                }

                for (int k = 1; k <= n; k++)
                {
                    if (j == k)
                    {
                        continue;
                    }
                    printf(" %d", matrix[k][j]);
                }
                printf("\n");
            }
        }
    }
    return 0;
}
