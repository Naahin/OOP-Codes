#include<iostream>
#include<conio.h>
using namespace std;

class Student
{
public:
    int id;
    double cgpa;
};

int main()
{
    Student Rahim;
    Rahim.id = 101;
    Rahim.cgpa = 3.78;
    cout << "ID is = " << Rahim.id << " " << "CGPA is = " << Rahim.cgpa <<endl;
    Student Karim;
    Karim.id = 293;
    Karim.cgpa = 3.67;
    cout << "ID is = " << Karim.id << " " << "CGPA is = " << Karim.cgpa <<endl;
    getch();

}
