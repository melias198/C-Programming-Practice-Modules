#include<stdio.h>
#include<math.h>
int main()
{
    int n,l,r,i,min=0,max=0;
    scanf("%d %d %d",&n,&l,&r);

    for(i=1;i<l;i++)min+=pow(2,i);

    
    min+=n-l+1;

    for(i=0;i<r;i++)max+=pow(2,i);


    max+=(n-r)*(pow(2,(i-1)));

    printf("%d %d",min,max);
}

