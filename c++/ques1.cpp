#include<iostream>
#include<string.h>
using namespace std;

class student
{
    string name;
    int roll,marks;
    public:

    student(string s,int r,int m){
        name =s;
        roll=r;
        marks=m;
    }
    void display()
    {
        cout<<"name is:"<<name<<endl;
        cout<<"roll is:"<<roll<<endl;
        cout<<"marks is:"<<marks<<endl;
    }
};
int main()
{
    student s1("shivam",304,500);
    s1.display();
}