#include<stdio.h>
int Bsearch()
{
    int a[69]={1,2,3,4,5};
    int target=3;
    int s=0,mid;
    int end=5;
    while(s<=end)
    {
        int mid=(s+end)/2;
        if(a[mid]==target)
        {
            return mid;
            
        }
        else if(a[mid]<target)
        {
            s=mid+1;
        }
        else
        {
            end=mid-1;
        }
       
    }
     
 return -1;
}
int main()
{
    int mid=Bsearch();
    printf("%d",mid);
}