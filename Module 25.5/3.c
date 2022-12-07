#include <stdio.h>
#include <string.h>

int string_roll(char s[])
{
    int count = 0;
    int n = strlen(s);
    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] -= 96;
        count += s[i];
    }
    power_of_two(count, n);
}

void power_of_two(int ans, int n)
{
    int count = 2, flag = 0, index = 0;
    for (int i = 2; i < n; i++)
    {
        count *= 2;
        if (count == ans)
        {
            flag = 1;
            index = i;
            break;
        }
    }
    if (flag == 1)
    {
        printf("YES\n");
        printf("cost = 2^%d", index);
    }
    else
    {
        printf("NO");
    }
}

int main()
{
    char s[100];
    scanf("%s", s);
    int n = strlen(s);
    string_roll(s);
    return 0;
}
