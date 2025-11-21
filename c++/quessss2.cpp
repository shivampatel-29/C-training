//in the above ques create a cuboid class which should be the derived class of rectangle.
//The cuboid class should only one member variable i.e. height.
//Also write a func to find the volume of the cuboid.
//Note that because of inheritance length and breadth variable is already available to the cuboid class .
//What are the changes need to be done in the rect class for this new task.

#include<iostream>
using namespace std;

class Rectangle{
    protected:
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
class cuboid: public Rectangle{
    protected:
    int height;
    public:
    cuboid(){
        height=1;
    }
    cuboid(int length,int breadth,int height):Rectangle(length,breadth){
        this->height=height;
    }
    int volume(){
        return length*breadth*height;
    }
    void display(){
        cout<<"volume: "<<volume();
    }
};
int main(){
    cuboid a(20,10,5);
    a.display();
    
}