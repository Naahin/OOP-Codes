#include<iostream>
using namespace std;

class student
{
public:

    const int admissionfee;
    const int examfee;
    int id;
    student(int a,int b,int c)
    : admissionfee(a), examfee(b)
    {
        cout << admissionfee << endl;
        cout << examfee << endl;
        id = c;
        cout << id << endl;
    }
};

int main()
{
    student(8000,500,001);
}
