#include<stdio.h>
int main()
{

    FILE * inputFile=fopen("input6.txt","r");
    FILE * outputFile=fopen("output6.txt","a");
    int year;
    fscanf(inputFile,"%d",&year);
    if((year%4==0 && year%100!=0) || (year%4==0 && year%100==0 && year%400==0))
    {
        fprintf(outputFile,"%d-->YES\n",year);
    }
    else
    {
        fprintf(outputFile,"%d-->NO\n",year);
    }
    return 0;
}

