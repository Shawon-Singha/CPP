// Sum of 1+3+5+7+9+.............
// multi of 1*3*5*7*9*.................


#include<iostream>
using namespace std;

int main(){
    unsigned int n,sum = 0,multi = 1;

    cout << "Enter the value of n : ";
    cin >> n;

    for(int i = 1;i<=n;i+=2){
        sum = sum + i;
        multi = multi * i;
    }

    cout << sum << endl;
    cout << multi << endl;

    return 0;
}