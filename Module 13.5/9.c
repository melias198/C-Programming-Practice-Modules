#include<stdio.h>

int main()
{
    int n,piranha[100];
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&piranha[i]);
    }
    int max=piranha[1];
    for(int i=1;i<=n;i++)
    {
        if(piranha[i]>max)
        max=piranha[i];
    }
    int a=0,b=1,c=0,d=0;
    for(int i=1;i<=n;i++)
    {
        if(c<piranha[i])
        {
           c=piranha[i];
           a=i;
        }
        if(i>=1)
        {
           if(piranha[i]==piranha[i-1])
           {
            b++;
           }
           if(d) a++;
        }
        if(piranha[i]!=piranha[i-1])
        {
            d=0;
        }
        if(b==n)
        {
             printf("-1\n");
        }
        else{
            printf("%d\n",a+1);
        }
    }


    

    return 0;
}

