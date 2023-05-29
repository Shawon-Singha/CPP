#include<iostream>
using namespace std;

int main(){
    int num1,num2;

    cout << "Enter the value : ";

    cin >> num1 >> num2;

    if (num1 > num2) cout << num1 << " is the highest value ." << endl
                           << num2 << " is the lowest value." <<endl ;

    else cout << num2 << " is the highest value." << endl
              << num1 << " is the lowest value" << endl ;

    return 0; 
}