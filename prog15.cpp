#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int row,col,n;
    cin >> n;
    for(row =1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            cout << " * ";
        }
        cout <<endl;
    }
    getch();
}
