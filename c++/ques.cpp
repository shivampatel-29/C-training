#include<iostream>
using namespace std;
class myclass
{
    int x;
    float y;
    public:
    myclass()
    {
        x=0;
        y=2;

    }
    myclass(const myclass &other)
    {
        x =other.x;
        y =other.y;
    }
    void display(){
        cout<<"x"<<x<<endl;
        cout<<"y"<<y<<endl;
    };

};