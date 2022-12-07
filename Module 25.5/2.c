#include <stdio.h>
void array_sorting(int arra[], int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arra[j] > arra[j + 1])
            {
                temp = arra[j];
                arra[j] = arra[j + 1];
                arra[j + 1] = temp;
            }
        }
    }
}

void kth_largest_value(int arra[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        if (i == (n - k))
            printf("%dth largest element = %d\n", k, arra[i]);
    }
}

void kth_smallest_value(int arra[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        if (i == (k - 1))
            printf("%dth smallest element = %d", k, arra[i]);
    }
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
    int k;
    scanf("%d", &k);
    array_sorting(arra, n);
    kth_largest_value(arra, n, k);
    kth_smallest_value(arra, n, k);

    return 0;
}
