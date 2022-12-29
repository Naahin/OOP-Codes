#include<bits/stdc++.h>
using namespace std;

class Base //base class
{
public:
virtual void show() //virtual function
{ cout << "Base"<<endl; }
};
class Derive1 : public Base //derived class 1
{
public:
void show()
{ cout << "Derv1"<<endl; }
};
class Derive2 : public Base //derived class 2
{
public:
void show()
{ cout << "Derv2"<<endl; }
};
int main()
{
Derive1 dv1; //object of derived class 1
Derive2 dv2; //object of derived class 2
Base *ptr; //pointer to base class
ptr = &dv1; //put address of dv1 in pointer
ptr->show(); //execute show()
ptr = &dv2; //put address of dv2 in pointer
ptr->show(); //execute show()
return 0;
}

