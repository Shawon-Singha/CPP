// #include<bits/stdc++.h>

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int a, b;

    cout << "enter the value of b :";
    cin >> b;

    a = b + 7;

    /*here "a,b" are operand , "=,+" are operator , 7 is constant.
     total equation is a express.
    */

    cout << " Value of a is :" << a << endl;

    /*Arithmetic operator (+,-,*,/,%)*/;

    int add = a + b;
    int subtraction = a - b;
    int Multi = a * b;
    double division = (float)a / b; // type casting.
    int remainder = a % b;

    cout << "value of Add :" << add << endl;
    cout << "value of Subtraction :" << subtraction << endl;
    cout << "value of Multi :" << Multi << endl;
    cout << "value of Division :" << division << endl;
    cout << "value of Remainder :" << remainder << endl;

    getch();
}