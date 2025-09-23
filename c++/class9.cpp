#include<iostream>
using namespace std;
class x
{
    public:
        int plusfunc(int x,int y)
        {
            return x+y;
        }
        float plusfunc(double x, double y)
        {
            return x+y;
        }
    
};
int main()
{
    x x1;
    int mynum1 = x1.plusfunc(8,5);
    double mynum2 =x1.plusfunc(4.3,6.26);
    cout<<"int: "<<mynum1<<"\n";
    cout<<"double: "<<mynum2<<"\n";
    return 0;

}