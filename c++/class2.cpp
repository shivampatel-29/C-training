#include<iostream>
using namespace std;
class outer
{
    public:
    class inner
    {
        public:
        void display()
        {
            std::cout<<"This is inner class";
        }
    };
};
int main()
{
    outer::inner obj;
    obj.display();
    return 0;
}