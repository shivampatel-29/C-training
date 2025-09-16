#include<iostream>
using namespace std;
int main()
{
    int code;
    cout<<"Enter the code: ";
    cin>>code;
    if(code==1234)
    {
        cout<<"Access granted"<<endl;
    }
    else
    {
        cout<<"Access denied"<<endl;
    }
}