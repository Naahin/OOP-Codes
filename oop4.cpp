#include<iostream>
#include<conio.h>
using namespace std;

class student
{
public:
    int id;
    double cgpa;
    void display()
    {
        cout << id << " " << cgpa <<endl;
    }
    student(int x,double y)
    {
        id = x;
        cgpa = y;
    }
};

int main()
{
    student Rahim(10,3.56);
    Rahim.display();
    student Karim(40,3.89);
    Karim.display();
    getch();
}
