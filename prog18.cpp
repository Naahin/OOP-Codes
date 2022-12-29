#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int x = 5;
    int *p;
    p = &x;
    cout << p <<endl;
    cout << *p;
    getch();
}
