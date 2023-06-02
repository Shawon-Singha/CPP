#include<iostream>
using namespace std;

int main(){
    int num1 = 10, num2 = 20;
    int *p,*q;
    p = &num1;
    q = &num2;

    int sum = *p + *q;

    cout << "Sum : " << sum << endl;


    return 0;

}