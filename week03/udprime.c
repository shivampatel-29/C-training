#include<stdio.h>
int prime(a)
{
  for(int i=2;i<a;i++)
  {
    if(a%i==0)
    {
      return 0;
    }
  }
  return 1;
}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(prime(n))
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
}