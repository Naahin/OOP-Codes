#include<bits/stdc++.h>
using namespace std;
class weight
{
private:
    int kilo;
public:
    weight()
    {
        kilo = 5;
    }
    weight(int k)
    {
        kilo = k;
    }
    weight operator + (const weight& obj)
    {
        int total;
        total = kilo + obj.kilo;
        cout<<total<<endl;
    }

};
int main()
{
    weight w1,w2(20);
    weight w3;
    w3 = w1+w2;
    return 0;

}
