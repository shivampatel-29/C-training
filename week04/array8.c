#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int temp=0,i;
    for(int i=0;i<5;i++)
    {
        temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
    }
    for(int i=0;i<5;i++)
    printf("%d\t",a[i]);
}