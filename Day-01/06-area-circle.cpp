#include <iostream>
using namespace std;

int main(){
    float r, pi;
    pi = 3.1415;
    cout << "radius of the circle ";
    cin >> r;
    float area = pi * r * r;
    cout << "area of the circle of radius r is " << area << endl;
    return 0;
}