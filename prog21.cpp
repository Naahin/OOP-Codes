#include<iostream>
#include<conio.h>
using namespace std;

void sum(int a,int b)
{
    int result = a+b;
    cout << result <<endl;
}

void sum(int a,int b,int c)
{
    int result = a+b+c;
    cout << result;
}

int main()
{
    sum(10,20);
    sum(20,30);
    getch();
}
