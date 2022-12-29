#include<iostream>
using namespace std;

class Shape
{
public:
    double a;
    double b;
    Shape(int x,int y)
    {
        a = x;
        b = y;
    }
    double area()
    {
        return 0;
    }
};
class Triangle : public Shape
{

};
