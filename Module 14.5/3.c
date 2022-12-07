#include <stdio.h>
#include <string.h>
int main()
{
    char word[100];
    int sum = 0;
    fgets(word, sizeof(word), stdin);
    for (int i = 0; i < strlen(word); i++)
    {
        if (word[i] >= 'a' && word[i] <= 'z')
        {
            sum += word[i] - 96;
        }
    }
    int sum1 = sum, index, s = 2;
    for (int i = 2; i <= sum; i++)
    {
        if (sum1 % 2 == 0 && sum1 != 2)
        {
            s *= 2;
            index = i;
            sum1 = sum1 / 2;
        }
    }
    if (s == sum)
    {
        printf("Yes\n");
        printf("cost = 2^%d", index);
    }
    else
    {
        printf("No");
    }
    return 0;
}
