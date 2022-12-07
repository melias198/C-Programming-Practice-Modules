#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int n;
    scanf("%d", &n);
    int arra[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arra[i]);
    }

    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arra[j] > arra[j + 1])
            {
                swap(&arra[j], &arra[j + 1]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arra[i]);
    }

    return 0;
}
