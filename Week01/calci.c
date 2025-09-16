#include<stdio.h>
#include<conio.h>
int main() 
{ 
 int a, b ;
 char c;
 printf("enter first no.:");
 scanf("%d",&a);
 printf("enter second no.:");
 scanf("%d",&b);
 printf("enter choice(+,-,/,*):");
   if (c=='+')
  printf("% + %d = %d",a,b,a+b);
   else if (c=='-')
  printf("%d - %d = %d",a,b,a-b);
   else if (c=='/')
  printf("%d / %d = %d",a,b,a/b);
   else if (c=='*')
  printf("%d * %d = %d",a,b,a*b);
   else 
  printf("invalid operation\n");

}