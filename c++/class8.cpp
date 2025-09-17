#include<iostream>
using namespace std;
class car
{
    public:
    string brand;
    string model;

    car()
    {
        brand="unknown";
        model="unknown";
    }
    car(string b,string m)
    {
        brand=b;
        model=m;
    }
};
int main()
{
    car car1;
    car car2("BMW","X5");
    car car3("Ford","Mustang");
    cout<<"Car 1: "<<car1.brand<<" "<<car1.model<<"\n";
    cout<<"Car 2: "<<car2.brand<<" "<<car2.model<<"\n";
    cout<<"Car 3: "<<car3.brand<<" "<<car3.model<<"\n";
    return 0;
}    