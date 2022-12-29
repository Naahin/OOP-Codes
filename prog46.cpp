#include<bits/stdc++.h>
using namespace std;
class A
{
public:
    void f1()
    {
        cout<<"Hello"<<endl;
    }
};
class B : virtual public A
{
    public:
    void f2()
    {
        cout<<"Welcome to Bangladesh"<<endl;
    }
};
class C : virtual public A
{

};
class D : public B, public C
{

};
int main()
{
    D obj;
    obj.f1();
    obj.f2();
}
