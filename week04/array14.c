#include<stdio.h>
#include<limits.h>
int main()
{
    int a[5]={2,-4,-6,7,-2};
    int maxsum=0;
    int cursum=0;
    
      for(int i=0;i<5;i++)
      {
        cursum=cursum+a[i];
        if(cursum>maxsum)
        {
           maxsum=cursum;
        }
      }
    printf("%d",maxsum); 
}
