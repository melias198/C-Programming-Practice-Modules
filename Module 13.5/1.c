#include <stdio.h>
#include <string.h>
int main()
{
    char word[100];
    scanf("%s", word);
    int lenght = strlen(word), max = 26;
    int sort[max + 1];
    for (int i = 0; i <= max; i++)
    {
        sort[i] = 0;
    }

    for (int i = 0; i < lenght; i++)
    {
        sort[(word[i] - 'a') + 1]++;
    }

    int count = 0;
    for (int i = 1; i <= max; i++)
    {
        if (sort[i] >= 1)
        {
            count++;
        }
    }

    int j = 0;
    while (j != count)
    {
        int biggest = -1, index = -1;
        char ch;

        for (int i = 1; i <= max; i++)
        {
            if (sort[i] > biggest)
            {
                biggest = sort[i];
                ch = i + 96;
                index = i;
            }
        }
        for (int i = 1; i <= biggest; i++)
        {
            printf("%c", ch);
        }
        sort[index] = 0;
        j++;
    }
    printf("\n");
    return 0;
}
