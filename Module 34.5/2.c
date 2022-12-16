#include<stdio.h>
int main()
{
    FILE * inputFile=fopen("input2.txt","r");
    FILE * outputFile=fopen("output2.txt","w");
    if(inputFile==NULL)
    {
        printf("Not Found File");
    }
    int n;
    fscanf(inputFile,"%d",&n);
    for(int i=1;i<=n;i++)
    {
        fprintf(outputFile,"%d ",i);
    }
    return 0;
}

