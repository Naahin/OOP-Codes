#include<bits/stdc++.h>
using namespace std;
class A
{
public:
   A()
    {
        cout << "Numbers:"<<endl;
    }
};
class B : public A
{
public:
    B()
    {
        cout << "Roll 1 = 20"<<endl;
    }
};
class C : public A
{
public:
    C()
    {
        cout << "Roll 2 = 50"<<endl;
    }
};
int main()
{
    A ob1;
    cout<<"........"<<endl;
    B ob2;

    C ob3;

}


