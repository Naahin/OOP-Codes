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

bool operator <(const Distance& d) {
if(feet < d.feet && inches < d.inches) {
return true;
}
else return false;
}
};
int main() {
Distance D1(10, 11), D2(20, 21);
if( D1 < D2 ) {
cout << "D1 is less than D2 " << endl;
} else {
cout << "D1 is not less than D2 " << endl;
}
return 0;
}

