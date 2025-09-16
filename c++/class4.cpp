#include<iostream>
using namespace std;
class test
{
    public:
    void show(int val);

};
void test::show(int val)
{
    cout<<"\nValue is: "<<val;
}
int main()
{

    test t1 ,a2;
    t1.show(4);
    a2.show(7);
    return 0;   
}