//given a class rect with attributes length and breadth, write methods to calculate the area and perimeter of the rect.
//Also demonstrate the use of these methods in a sample program

#include<iostream>
using namespace std;

class Rectangle{
    int length,breadth;
    public:
    Rectangle(){
        length=1,breadth=1;
    }
    Rectangle(int length,int breadth){
        this->length=length;
        this->breadth=breadth;
    } 
    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length+breadth);
    }
    void display(){
        cout<<"Area: "<<area()<<"  Perimeter: "<<perimeter()<<endl;
    }
};
int main(){
    Rectangle r(20,10);
    r.display();
}
