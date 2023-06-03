#include<iostream>
using namespace std;

void moNey(int &taka){
    taka = 2 * taka;
    
    cout <<  taka<< endl;
}

int main(){
    int money = 10;
    moNey(money);

    cout << money << endl;

    return 0;
}