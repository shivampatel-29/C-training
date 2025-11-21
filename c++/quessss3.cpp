#include<iostream>
using namespace std;

class car{
    public:
    string fueltype;
    void start(){
        cout<<"car started  ";
    }
    void stop(){
        cout<<"  car stopped";
    }
};
class familycar :virtual public car{

};
class sportscar :virtual public car{

};
class SUV :public familycar, public sportscar{

};
int main(){
    SUV s1;
     s1.fueltype = "petrol";
     s1.start();
     s1.stop();
    // s1.familycar::fueltype ="Petrol";
    // s1.familycar::start();
    // s1.familycar::stop();
}