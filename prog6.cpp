#include<iostream>

using namespace std;
int main()
{
    int a;
    cin >> a;
    for(int i=2000; i<=3000; i++)
    {
        if (a%4==2)
        {
            cout << a;
            break;
        }
         else
        {
            a++;

        }

    }

        return 0;
}









