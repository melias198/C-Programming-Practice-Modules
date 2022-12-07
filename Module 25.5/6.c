#include<stdio.h>
int main()
{
    int a,b,c;
    int* p=&a;
    int* q=&b;
    int* r=&c;
    scanf("%d%d%d",&*p,&*q,&*r);
    int sum=*p+*q+*r;
    printf("%d",sum);
    return 0;
}

