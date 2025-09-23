#include<iostream>
#include<string.h>
using namespace std;
class vehicle
{
    public:
    string brand="ford";
    void honk()
    {
        cout<<"ratatata!\n";

    }
};
class car: public vehicle
{
    public:
    string model="mustang";

};
int main()
{
    car mycar;
    mycar.honk();
    cout<<mycar.brand +" "+ mycar.model;
    return 0;
}