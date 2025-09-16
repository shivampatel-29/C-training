#include<iostream>
using namespace std;
class car
{
    public:
    string brand;
    string model;
    int year;
    car(string x,string y,int z)
    {
        brand= x;
        model= y;
        year= z;

    }
};
int main()
{
    car carobj1("bmw","x5",2006)
    car carobj2("ford","mustang",2008)
    
    return 0;
}
