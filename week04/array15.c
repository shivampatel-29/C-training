#include<stdio.h>
int main()
{
    int a[3]={1,2,3};
    int b[3]={4,5,6};
    int m=3,n=3;
    int c[m+n];
    for(int i=0;i<m;i++)
    {
        c[i]=a[i];
    }
    for(int j=0;j<n;j++)
    {
       c[m+j]=b[j];
    }
    for(int i=0;i<(m+n);i++)
    {
    printf("\t%d",c[i]);
    }
}