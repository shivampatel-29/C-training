#include<iostream>
using namespace std;
class dog
{
    public:
    void bark(int woof); // 'woof' is a parameter

};
void dog::bark(int woof)
{
    cout<<"\nWoof Woof: "<<woof;
}
int main()
{
    dog d1 ,d2;
    d1.bark(6);
    d2.bark(1);
    
}