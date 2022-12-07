#include<stdio.h>

int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int* a=&x;
    int* b=&y;
    float avg= (*a+*b)/2.0;
    printf("%f",avg);
    return 0;
}

