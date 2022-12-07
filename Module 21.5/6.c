#include<stdio.h>
void result_number(x);
int main()
{
    int n;
    scanf("%d",&n);
    result_number(n);

    return 0;
}
void result_number(x)
{
 for(int i=1;i<=x;i++)
    {
        if(x%i==0)
        {
            printf("%d ",i);
        }
    }
}
