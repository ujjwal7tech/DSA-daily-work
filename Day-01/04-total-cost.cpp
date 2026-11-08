#include <iostream>
using namespace std;

int main(){
    float pencil, pen, eraser;
    cout << "enter the price of 3 items : ";
    cin >> pencil >> pen >> eraser;
    float total_cost = pencil + pen + eraser;
    float final_cost = (total_cost * 118) / 100;
    cout << "total cost : " << total_cost << endl << "final_cost : " << final_cost << "\n";
    return 0;
}