#include<iostream>
using namespace std;

int main(){
    double base,height;

    cout << "Enter thr base : ";
    cin >> base;

    cout << endl  << "Enter the height : ";
    cin >> height;

    float area = .5 * base * height;

    cout << "The area of triangle is : " << area << endl;

    return 0; 
}