 #include<stdio.h>
void print_star(int n);
int main()
{
    int n;
    scanf("%d",&n);
    print_star(n);
    
    return 0;
}


void print_star(int n)
{
    int i;
     for(i=n;i>=1;i--)
    {
       for(int k=0;k<n-i;k++)
        {
            printf(" ");
        }
       for(int j=1;j<=(2*i)-1;j++)
       {
        printf("*");
       }
      printf("\n");
    }

}

