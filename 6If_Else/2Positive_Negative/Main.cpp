#include<iostream>
using namespace std;

int main(){

    int num;
    cout << " Enter a integer number: ";

    cin >> num ;

    if (num > 0) cout << "The number is Positive";
    else if(num == 0) cout << "This number is zero.";
    else cout << "The number is Negetive.";

    return 0;
}
