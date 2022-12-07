#include<stdio.h>
#include<string.h>
int main()
{
    char word[100];
    fgets(word,sizeof(word),stdin);
    int flag =1;
    for(int i=0;i<strlen(word);i++)
    {
        if(word[i]>='A' && word[i]<='Z' || word[i]>='a' && word[i]<='z')
        {
            flag=0;
            break;
        }
    }
    if(flag==0)
    {
        printf("No\n");
    }
    else{
        printf("Yes\n");
    }

    return 0;
}

