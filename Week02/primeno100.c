#include<stdio.h>
int main()
{
    int n=100,prime;
    for(prime=2;prime<=n;prime++)
    {
        int i,flag=1;
        for(i=2;i<=prime/2;i++)
        {
            if(prime%i==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
            printf("%d ",prime);
    }
}