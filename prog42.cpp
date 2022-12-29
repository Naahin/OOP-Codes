#include<bits/stdc++.h>
using namespace std;
class A
{
protected:
    int a;
public:
    int b;
    void get()
    {
        cin>>a>>b;
    }
};
class B : public A
{
    public:
    void show()
    {
        cout<<a<< " " <<b<<endl;
    }
};
int main()
{
    B obj;
    obj.get();
    obj.show();
}
