#include<iostream>
using namespace std;

int main(){
    double f,c;

    cout << "Enter celsius : ";
    cin >> c;

    f = (c * 9) / 5 +32;

    cout << "Fahrenheit is : " << f  << endl;

    return 0;

    
}