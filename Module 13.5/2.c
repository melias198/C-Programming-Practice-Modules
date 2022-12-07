#include<stdio.h>
#include<string.h>
int main()
{
    char name[100];
    scanf("%s",name);
    int length=strlen(name),i,ans=0;
    for(i=0;i<length;i++)
    {
        if(name[i]!=name[(length-i-1)])
        {
            ans=1;
        }
    }
    if(ans==0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}


