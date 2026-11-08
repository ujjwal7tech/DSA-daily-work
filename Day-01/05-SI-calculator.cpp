#include <iostream>
using namespace std;

int main(){
    float P, R, T;
    cout << "enter the values of P R & T ";
    cin >> P >> R >> T;
    cout << "SI = " << (P * R * T) / 100 << endl;
    cout << "net amount = " << (P * R * T) / 100 + P;
    return 0;
}