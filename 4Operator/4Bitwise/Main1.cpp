#include<iostream>
using namespace std;

int main(){
    int a = 16,b= 5;

    /*
    first value convert into binary caz bit means work with  0,1;
    '&' means multiple those value and binary value again convert into decimal.
    '|' means add those value then convert them into decimal.. 
    
    '^'{XOR},if number of 1 will be odd, then output will be 1;The value ,we get ,it converts into decimal

    */
    
    int c = a&b;
    int d = a | b;
    int e = a ^ b;

    cout << c<<endl;
    cout << d << endl;
    cout << e << endl;


    /*
    '>>' means shift in right
    '<<' means shift in left;
     '>>2' means shift in right 2 space..
    */

   int f = a >> 2;
   cout << f << endl;

    return 0;

}