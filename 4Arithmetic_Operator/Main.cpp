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
   int subtraction  = a - b;
   int Multi = a * b;
   int division = (float) a / b; //type casting.
   int remainder  = a % b;

   cout << "balue of Add :" << add << endl;
   cout << "balue of Subtraction :" << subtraction << endl;
   cout << "balue of Multi :" << Multi << endl;
   cout << "balue of Division :" << division << endl;
   cout << "balue of Remainder :" << remainder << endl;
   
    

   

    getch();
}