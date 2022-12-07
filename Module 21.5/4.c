#include<stdio.h>
void even_serial(int n);
int main()
{
    int  n;
    scanf("%d",&n);
    even_serial(n);
    return 0;
}

void even_serial(int n)
{
  for(int i=2;i<n;i+=2)
  {
    printf("%d ",i);
  }
}

