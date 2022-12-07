#include <stdio.h>

int main()
{
    char ch;
    scanf("%c", &ch);
    int a, b;
    scanf("%d %d", &a, &b);

    if (ch == '+')
    {
        printf("%d", a + b);
    }
    else if (ch == '-')
    {
        printf("%d", a - b);
    }
    else if (ch == '*')
    {
        printf("%d", a * b);
    }
    else if (ch == '/')
    {
        printf("%d", a / b);
    }

    return 0;
}
