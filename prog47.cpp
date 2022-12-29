#include<bits/stdc++.h>
using namespace std;
class A
{
public:
    void f1()
    {
        cout<<"class name A"<<endl;
    }
};
class B
{
    public:
    void f1()
    {
        cout<<"class name B"<<endl;
    }
};
class C : public A,public B
{

};

int main()
{
    C obj;
    obj.A :: f1();
    obj.B :: f1();
}

