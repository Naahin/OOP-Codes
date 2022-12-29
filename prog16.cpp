#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n ,i, sum = 0;
    cin >> n;
    int arr[n];

    for(i=0; i<n; i++)
    {
        cout << "Marks for student " << i+1 << " = ";
        cin >> arr[i];
        sum = sum + arr[i];
    }
    cout << sum <<endl;
    int max = arr[0];
    for(i=1;i<n;i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
    }
    cout << max;

    getch();
}
