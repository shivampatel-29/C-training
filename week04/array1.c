#include<stdio.h>
#include<conio.h>
int main()
{
    int a[50];

    printf("enter 5 elements :");
    for(int i=0;i<5;i++)
    scanf("%d",&a[i]);

    for(int i=0;i<5;i++)
    {
        printf("%d\t",a[i]);
    }
     printf("\n");
    for(int i=4;i>=0;i--)
    { 
        printf("%d\t",a[i]);
    }    

}