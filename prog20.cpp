#include<iostream>
#include<conio.h>
using namespace std;

int addition(int a,int b)
{
    int sum = a+b;
    return sum;
}
int main()
{
    int x,y;
    cin >> x;
    cin >> y;
    int result = addition(x,y);
    cout << result;
    getch();
}
