#include<stdio.h>
#include<string.h>
int main()
{
    char word[100];
    scanf("%s",word);
    int vowel=0,cont=0,i;
    int length=strlen(word);
    for(i=0;i<length;i++)
    {
        if(word[i]>='a' && word[i]<='z')
        {
        if(word[i]=='a' ||word[i]=='e' || word[i]=='i' || word[i]=='o' || word[i]=='u'   )
        {
          vowel++;
        }
        else
        {
         cont++;
        }
        }
    }
    printf("Vowel - %d\n",vowel);
    printf("Consonant - %d\n",cont);
    return 0;
}

