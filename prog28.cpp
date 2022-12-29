#include<iostream>
using namespace std;

class Person
{
    public:
    string name;
    int age;
    void display()
    {
        cout << "Name : " << name << endl << "Age : " << age << endl;
    }
};
class Student : public Person
{
    public:
    int id;
    Student(string x, int y, int z)
    {
       name = x;
       id = y;
       age = z;
    }
    void display1()
    {
        cout << "Id : " << id << endl;
        display();
    }

};

int main()
{
    Student s1("Nasrin",24,21);
    s1.display1();

}

