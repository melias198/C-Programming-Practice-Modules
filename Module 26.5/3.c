#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arra[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arra[i]);
    }
    int* ara=&arra[0];
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(ara+i));
    }

    return 0;
}

