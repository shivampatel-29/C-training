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
 scanf(" %c",&c);
 switch(c)
 {
    case '+': printf("%d + %d = %d",a,b,a+b);
              break;
    case '-': printf("%d - %d = %d",a,b,a-b);
              break;
    case '/':
           if (b!=0)
            printf("%d / %d = %d",a,b,a/b);
            else
            printf("div by zero is not possible");
              break;
    case '*': printf("%d * %d = %d",a,b,a*b);
              break;
    default: printf("invalid operation\n");
 }
 return 0;
} 