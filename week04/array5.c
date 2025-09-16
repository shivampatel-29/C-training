#include<stdio.h>
int main()
{
    int a[50],num,f;
    printf("enter 5 elements :");
    for(int i=0;i<5;i++)
    scanf("%d",&a[i]);
    int max=a[0],max2=a[0];
    for(int i=0;i<5;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }

    }
    for(int i=0;i<5;i++)
    if(max2<a[i] && max>a[i])
    {
        max2=a[i];
    }
    printf("second largest no. is %d",max2);

}