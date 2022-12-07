#include<stdio.h>

void revers_function(int n)
{
   if(n==1)
   printf("%d",n);
   else
   {
    printf("%d ",n);
    revers_function(n-1);
   }

}

int main()
{
    int n;
    scanf("%d",&n);
    revers_function(n);

    return 0;
}

