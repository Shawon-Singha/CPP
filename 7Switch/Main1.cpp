#include<iostream>
using namespace std;

int main(){
    int num;

    cout << "Enter number: ";
    cin >> num;

    switch (num)
    {
    case 1:
        cout << "This value is one";
        break;
    case 2:
        cout << "This value is Two";
        break;
    case 3:
        cout << "This value is Three";
        break;
    case 4:
        cout << "This value is Four";
        break;
    case 5:
        cout << "This value is Five";
        break;
    
    default:
         cout << "Invalid";
        break;
    }

    return 0;
}