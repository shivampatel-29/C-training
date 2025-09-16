#include<stdio.h>
int main()
{
    int a[50];
    printf("enter 5 elements :");
    for(int i=0;i<5;i++)
    scanf("%d",&a[i]);
    int max=a[0],min=a[0];
    for(int i=0;i<5;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
     for(int i=0;i<5;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("max. element is %d",max);
    printf("\nmax. element is %d",min);
}