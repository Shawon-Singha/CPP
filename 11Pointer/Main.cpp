#include<iostream>
using namespace std;

int main(){
    int x = 10; // means value of x
    int *p; // declare of pointer

    p = &x; //means location ,where that value stored.

   
    cout << x << endl;
    cout << &x << endl;
    cout << p << endl;
    cout << *p << endl; 
   

    return 0;

}