#include<iostream>
using namespace std;

int main(){
    int b = 20;
    int *f = &b;

    cout << f << endl; //print the address
    cout << *f << endl; // that point to the value of b
     // here we use *f for printing value of b,that *f called deference variable

     return 0;
}