#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000];
    
    int n;
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++)
    {
        char c[100];
        scanf(" %s",c);
        
        if(i == 0)
        {
            strcpy(s, c);
            strcat(s, " ");
        }
        else
        {
            strcat(s, c);
            strcat(s, " ");
        }
    }
    
    puts(s);

    return 0;
}