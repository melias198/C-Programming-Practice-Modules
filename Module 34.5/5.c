#include<stdio.h>

int main()
{
    FILE * inputFile=fopen("input5.txt","r");
    FILE * outputFile=fopen("output5.txt","w");
    int n;
    fscanf(inputFile,"%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int k=1;k<n-i;k++)
        {
            fprintf(outputFile," ");
        }
        for(int j=0;j<n;j++)
        {
            fprintf(outputFile,"#");
        }
        fprintf(outputFile,"\n");
    }
    return 0;
}

