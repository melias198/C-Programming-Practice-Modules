#include<stdio.h>
void serial(int n);

int main()
{
    int n;
    scanf("%d",&n);
    serial(n);
    return 0;
}


void serial(int n)
{
    int arra[100];
    if(n>0)
    {
       for(int i=n;i>=-n;i--)
        {
            arra[i]=i;
            printf("%d ",arra[i]);
        }
    }
    else
    {
        for(int i=n;i<=-n;i++)
        {
            arra[i]=i;
            printf("%d ",arra[i]);
        }
    }

}

