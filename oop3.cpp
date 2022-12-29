#include<iostream>
#include<conio.h>
using namespace std;

class Student
{
    public:
    int id;
    double cgpa;
    void display()
    {
        cout << id << " " << cgpa << endl;
    }
    void setvalue(int x,double y)
    {
        id = x;
        cgpa = y;
    }
};

int main()
{
    Student Rahim, Karim;
    Rahim.setvalue(10,3.56);
    Rahim.display();
    Karim.setvalue(20,3.78);
    Karim.display();
    getch();
}
