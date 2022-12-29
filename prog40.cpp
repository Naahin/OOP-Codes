#include<bits/stdc++.h>
using namespace std;
class name
{
    private:
        string n;
    public:
        name()
        {
            n = "nahin";
        }
        name(string k)
        {
            n = k;
        }
        void operator = (const name& obj)
        {
            n = obj.n;
        }
        void display()
        {
            cout<<n<<endl;
        }
};
int main()
{
    name ob1, ob2("nasrin");
    ob1.display();
    ob1 = ob2;
    ob2.display();
}
