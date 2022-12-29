#include<bits/stdc++.h>
using namespace std;
template<class t1,class t2>
class sample
{
private:
    t1 m;
    t2 n;
public:
    void getdata()
    {
        cin>>m>>n;
    }
    void showdata()
    {
        cout<<m<<" " <<n;
    }
};
int main()
{
    sample<int, int>ob1;
    sample<int, float>ob2;
    ob1.getdata();
    ob1.showdata();
    ob2.getdata();
    ob2.showdata();
}
