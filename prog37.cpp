#include<bits/stdc++.h>
using namespace std;

class Test
{
private:
int count;
public:
Test()
{
    count = 5;
}
void show()
{
    cout<<"prev count: " << count<<endl;
}
void operator ++()
{
count = count+1;
}
void Display()
{
    cout<<"after Count: "<<count; }
};
int main()
{
Test t;
t.show();
// this calls "function void operator ++()" function
++t;
t.Display();

}

