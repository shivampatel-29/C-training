#include<stdio.h>
int main()
{
    int a[50],sum=0;
    printf("enter 5 elements :");
    for(int i=0;i<5;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<5;i++)
    {
        sum=sum+a[i];
    }
    printf("the sum of array is %d",sum);
}