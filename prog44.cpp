#include<bits/stdc++.h>
using namespace std;
class A
{
public:
    void f1()
    {
        cout << "A"<<endl;
    }
};
class B : public A
{
public:
    void f2()
    {
        cout << "B"<<endl;
    }
};
class C : public B
{
public:
    void f3()
    {
        cout << "C"<<endl;
    }
};
int main()
{
    C obj;
    obj.f1();
    obj.f2();
    obj.f3();
}


