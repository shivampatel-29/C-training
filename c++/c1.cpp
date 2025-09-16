#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    a=5;
    b=9;
    cout<<"value before swapping "<<a<<" and "<<b;
    temp=a;
    a=b;
    b=temp;
    cout<<"\nvalue after swapping "<<a<<" and "<<b;
    return 0;
}