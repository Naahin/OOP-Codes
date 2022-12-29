#include<iostream>
using namespace std;

class Person
{
public:

    virtual void a1() = 0;

};
class Rahim : public Person
{
public:
    void a1()
    {
        cout << "This is Rahim" << endl;
    }
};
class Karim : public Person
{
public:
    void a1()
    {
        cout << "This is Karim" << endl;
    }
};

int main()
{
    Person *p;
    Rahim r;
    Karim k;
    p = &r;
    p -> a1();
    p = &k;
    p -> a1();
}
