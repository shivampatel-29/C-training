#include<stdio.h>
int main()
{
    int a,b;
    a=9;
    b=3;
    a=a^b;
    b=a^b;
    a=a^b;
    printf("values after swapping :\n");
    printf("a: %d\n",a);
    printf("b: %d",b);

}