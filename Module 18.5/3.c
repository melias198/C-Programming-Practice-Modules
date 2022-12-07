#include <stdio.h>

int main()
{
    int n, sum = 0;
    ;
    scanf("%d", &n);
    int arra[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arra[i]);
        sum += arra[i] % 10;
    }
    printf("sum = %d", sum);

    return 0;
}
