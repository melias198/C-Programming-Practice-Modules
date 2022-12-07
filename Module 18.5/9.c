#include<stdio.h>

int main()
{
    int days,bowl,plate,type1=0,type2=0;
    scanf("%d %d %d",&days,&bowl,&plate);
    int meal[days];
    for(int i=0;i<days;i++)
    {
       scanf("%d",&meal[i]);
       if(meal[i]==1)
       {
        type1++;
       }
       else
       {
        type2++;
       }
    }
    int sum=bowl+plate;
    if(days==sum)
    {
      if(type1>bowl)
      {
        printf("%d",type1-bowl);
      }
    }
    else
    {
        printf("%d\n",days-sum);
    }

    return 0;
}

