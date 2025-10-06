#include <stdio.h>
int main()
{
    int a[7]={1,3,4,-5,5,1,6};
    int max=0;
    for(int i=0;i<7;i++)
    {
        for(int j=0;j<7;j++)
        {
            if(a[i]+a[j]==max)
            {
                printf("%d %d\n",i,j);
                break;
            }
        }
    }
}