#include<stdio.h>

int main()
{
    FILE * inputFile=fopen("input4.txt","r");
    FILE * outputFile=fopen("output4.txt","w");
    int n;
    fscanf(inputFile,"%d",&n);
    int arra[n];
    for(int i=0;i<n;i++)
    {
        fscanf(inputFile,"%d",&arra[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arra[i]%10;
    }
    fprintf(outputFile,"Sum = %d",sum);
    return 0;
}

