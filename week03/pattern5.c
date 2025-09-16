#include<stdio.h>
#include<conio.h>
int main()
{
     for(int i=0;i<5;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");

    }
    for(int m=0;m<5;m++)
    {
        for(int n=5;n>m;n--)
        {
            printf("*");
        }
        printf("\n");

    }
}
