#include<iostream>
using namespace std;

void intMoney(int *money){
    cout << money << endl;
    cout << *money << endl;

    *money = 2* (*money);
}


int main(){
    int money = 10;
    intMoney(&money);

    cout << "Main : " << money<< endl;

    return 0;

}