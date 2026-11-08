#include <iostream>
using namespace std;

int main(){
    float sci, math, bio;
    cout << "Enter the marks of 3 subjects : ";
    cin >> sci >> math >> bio;
    float avg = (sci + math + bio) / 3.0;
    cout << "average marks: " << avg;
    return 0;
}