#include<stdio.h>
int main()
{
    FILE * inputFile=fopen("input1.txt","r");
    FILE * outputFile=fopen("output1.txt","w");
    if(inputFile==NULL)
    {
        printf("Not Found File");
    }
    int n[5];
    for(int i=0;i<5;i++)
    {
        fscanf(inputFile,"%d ",&n[i]);
    }
    for(int i=0;i<5;i++)
    {
        fprintf(outputFile,"%d ",n[i]);
    }
    return 0;
}

