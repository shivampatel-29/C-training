#include <iostream>
using namespace std;

class Demo{
    public:
    int x;
    Demo(){
        x=2;
        cout<<"constructed\n";
    }
    ~Demo(){
        cout<<"destructed\n";
    }
};
int main(){
    Demo a;
    {
        Demo b;
    }
    Demo *c = new Demo; //new demo= dynamic object
}