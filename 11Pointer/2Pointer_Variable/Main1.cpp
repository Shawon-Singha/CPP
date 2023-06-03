#include<iostream>
using namespace std;

int main(){
    int x = 10;

    int *xPtr = &x;

    cout << *xPtr << endl;

    return 0;
}