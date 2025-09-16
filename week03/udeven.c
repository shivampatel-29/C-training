#include<stdio.h>
int even(a)
{
  if(a%2==0)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
int main()
{
  int n;
  printf("Enter a number:");
  scanf("%d",&n);
  if(even(n))
  {
    printf("The number is even");
  }
  else
  {
    printf("The number is odd");
  }
  return 0;
}