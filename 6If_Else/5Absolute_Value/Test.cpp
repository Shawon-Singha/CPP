#include<iostream>
using  namespace std;

int main(){
    int num;

    cout << "Enter the value : ";

    cin >> num;

    if(num < 0 ) cout << (-num);

    else cout << num;

    return 0;
}