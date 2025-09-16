#include<stdio.h>
int main()
{
    int a[50],num,f;
    printf("enter 5 elements :");
    for(int i=0;i<5;i++)
    scanf("%d",&a[i]);
    printf("enter a number to search :");
    scanf("%d",&num);
    for(int i=0;i<5;i++)
    {
        if(a[i]==num)
        {
            f=1;

        }
       
    }
    if(f==1)
    {
        printf("element found");
    }
    else
    {
        printf("element not found");
    }
}