#include<stdio.h>

void area_of_circle(float n)
{
    float area = 3.1416*n*n;
    printf("%f",area);
}

int main()
{
    int r;
    scanf("%d",&r);
    area_of_circle(r);
    return 0;
}

