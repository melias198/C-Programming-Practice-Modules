#include <stdio.h>
#include <stdbool.h>
#include<math.h>
bool is_prime(int n)
{
    bool flag = true;
    if (n % 2 == 0)
    {
        return false;
    }
    for (int i = 3; i <= sqrt(n); i=i+2)
    {
        if (n % i == 0)
        {
            flag = false;
            break;
        }
    }
    return flag;
}

int main()
{
    int row, counter = 2;
    scanf("%d", &row);
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            while(counter>2 && is_prime(counter)==false)
            {
                counter++;
            }
            printf("%d ",counter);
            counter++;

        }
        printf("\n");
    }

    return 0;
}
