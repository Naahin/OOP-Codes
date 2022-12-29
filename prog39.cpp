#include<bits/stdc++.h>
using namespace std;

class Distance {
private:
int feet;
int inches;
public:
Distance() {
feet = 0;
inches = 0;
}
Distance(int f, int i) {
feet = f;
inches = i;
}
void operator = (const Distance &D ) {
feet = D.feet;
inches = D.inches;
}
// method to display distance
void displayDistance() {
cout << "F: " << feet;
cout << " I:" << inches << endl;
}
};
int main() {
Distance D1(11, 10), D2(509, 119);
cout << "First Distance : ";
D1.displayDistance();
cout << "Second Distance :";
D2.displayDistance();
// use assignment operator
D1 = D2;
cout << "First Distance :";
D1.displayDistance();
return 0;
}

