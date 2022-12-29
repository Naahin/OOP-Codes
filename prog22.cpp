#include<iostream>
#include<conio.h>
using namespace std;

void displayarray(int A[])
{
    for(int i=0;i<5;i++)
    {
        cout << A[i] <<" ";
    }
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    displayarray(arr);
    getch();
}
