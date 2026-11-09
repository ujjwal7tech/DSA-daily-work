#include <iostream>
using namespace std;

int main(){
    int f, c;
    cout << "temp in fahrenheit : ";
    cin >> f;
    c = (f - 32) * 5 / 9;
    cout << "temp in celcius : " << c << endl;
    return 0;
}