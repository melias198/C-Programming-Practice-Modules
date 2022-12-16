#include<stdio.h>
int main()
{
    FILE * inputFile=fopen("input3.txt","r");
    FILE * outputFile=fopen("output3.txt","w");
    int t;
    fscanf(inputFile,"%d",&t);
    for(int i=0;i<t;i++)
    {
    int n;
    fscanf(inputFile,"%d",&n);
    if(n>0)
    {
        for(int i=n;i>=-n;i--)
        {
            fprintf(outputFile,"%d ",i);
        }
        fprintf(outputFile,"\n");
    }
    else
    {
        for(int i=n;i<=-n;i++)
        {
             fprintf(outputFile,"%d ",i);
        }
        fprintf(outputFile,"\n");
    }
    }
    return 0;
}

