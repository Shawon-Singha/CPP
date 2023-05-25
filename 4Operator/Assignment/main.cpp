#include<iostream>
using namespace std;

int main(){
    int x = 10, y = 5;

    cout << "Value of x : " << x <<endl;

    x +=5; //means x = x+5
    cout << "Increased value of x : " << x <<endl;

    cout << "Value of y : " << y << endl;

    y +=5; //means y = y + 5.
    cout << "Increased value : " << y <<endl;

    // here x increased value is 15 and y increased value is 10..
    x +=y; //maens x = x + y;
    cout << "Now the value of x : " << x << endl;

    /* 
    same way ; 

     x *=10 means x = x * 10
     y *=5 means y = y*5;
    */



    return 0;
}