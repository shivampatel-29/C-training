#include<stdio.h>
int main()
{
    int num;
    system("cls");
    printf("enter a number if it is palindrome or not:");
    scanf("%d",&num);
    int rev=0;
    int n=num;
    while (num>0)
    {
        int digit;
        digit=num%10;
        rev=rev*10+digit;
        num=num/10;
    }
    if (rev==n)
    {
        printf("palindrome");
    }
    else
    {
        printf("not palindrome");
    } 
          
}