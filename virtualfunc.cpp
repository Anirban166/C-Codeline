#include<iostream>
using namespace std;
class Shape                   
{
    public:
    virtual void calculateArea() = 0;
};

class Square : public Shape
{
       public:
       void calculateArea()
       { int s=50; cout<<s/5; }
};

class Circle : public Shape
{
    public:
       void calculateArea()
       { int s=30; cout<<s/2; }
};

int main()
{
    Square s; Circle c;
    s.calculateArea();
    c.calculateArea();

    return 0;
}
