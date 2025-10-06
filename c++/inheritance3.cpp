#include<iostream>
using namespace std;
class cars
{
    public:
    void startengine(){
        cout <<"Engine started"<< endl;
    }
};
class driver
{
     public:
    void drive(cars &car){
        car.startengine();
        cout <<"car is being drived"<< endl;
    }
};
int main()
{
    
    cars mycar;
    driver driver;
    driver.drive(mycar);
    
}