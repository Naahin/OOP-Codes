#include<iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    if((x%4==0) && (x%100 != 0))
    {
        cout << "Leap Year";
    }
    else if(x%400==0)
    {
        cout << "Leap Year";
    }
    else
    {
        cout << "Not Leap Year";
    }
    return 0;
}
