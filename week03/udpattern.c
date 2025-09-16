#include<stdio.h>
int pattern()
{
  for(int i=0;i<5;i++)
    {
        for(int j=0;j<=i;j++)
        if(i==j)
        {
        printf("* ");
        }
        printf("\n");
    }

}
int main()
{
    pattern();
}