#include<iostream>
#include<conio.h>
using namespace std;

void pass(int *n)
{
    *n = 20;

}

int main()
{
    int num = 10;
    cout << num <<endl;
    pass(&num);
    cout << num;
    getch();
}
