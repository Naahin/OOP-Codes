#include<iostream>
using namespace std;
class student
{
public:
    int id;
    student(int id)
    {
        this -> id = id;
    }
    void display()
    {
        cout << id;
    }
};
int main()
{
    student ob(20);
    ob.display();
}
