#include<iostream>
#include<iomanip> //for setprecision.
using namespace std;

int main(){
    int a,b ;
    cout << "Enter your desire value : ";
    cin >> a >> b;

    cout << showpoint; // for print point after result ..
    float add = a + b;
    cout << "value of Add :" << add << endl;


    //cout << noshowpoint; // don't want to see point value.
    float subtraction = a - b;
    cout << "value of Subtraction :" << subtraction << endl;

    cout << fixed; // afetr point how many value we needed
    cout << setprecision(2); // need 10 base value ..
    float Multi = a * b;
    cout << "value of Multi :" << Multi << endl;


    float division = a / b;
    cout << "value of Division :" << division << endl;


    return 0;
}