#include<iostream>
using namespace std;
int main()
{
    int n;
    int *ptr;
    cout << "Number of values you want to store in array" << endl;
    cin >> n;
    ptr = new int [n];
    cout << "Enter values to be stored in the array" << endl;
    for(int i=0;i<n;i++)
    {
        cin >> ptr[i];
    }
     for(int i=0;i<n;i++)
    {
        cout << ptr[i] << " ";
    }
}
