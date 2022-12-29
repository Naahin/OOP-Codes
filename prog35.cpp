#include<iostream>
using namespace std;
class student
{
    public:
    int roll;
    int result;
    student(int m,int n)
    {
        roll = m;
        result = n;
    }
    student(student &t);
    void display()
    {
        cout << "ROLL = " << roll << endl;
        cout << "RESULT = " <<result << endl;
    }
};
student :: student(student &t)
{
    roll = t.roll;
    result = t.result;
}
int main()
{
    student ob1(20,80);
    ob1.display();
    cout << "Now showing output using copy constructor" << endl;
    student ob2(ob1);
    ob2.display();
}
