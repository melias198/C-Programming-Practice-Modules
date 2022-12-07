#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d",&t);
    for(int ii=0;ii<t;ii++)
    {

    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    long long int c;
    scanf("%d",&n);
    scanf("%lld",&c) ;
    int k[105];
    for(int i=0;i<n;i++)    
          {
              scanf("%d",&k[i]);
          }
      int sum=0;
      for(int i=0;i<n;i++)    
          {
              sum+=k[i]*2;
          }

          
          if(sum<=c)
          {
            printf("Yes\n");
          }
          else
          {
             printf("No\n");
          }
         
    }
          
    return 0;
}
