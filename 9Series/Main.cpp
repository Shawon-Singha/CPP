//1+2+3+4 + .........+n = ?

#include<iostream>
using namespace std;

int main(){
    int sum = 0,n;
    cout << "Enter the value of n: ";

    cin >> n;

    for(int i = 1;i<=n;i++){
        sum = sum + i;
    }

    cout << "Total sum is : " << sum << endl;

    /*
      //another one 

    int total = (n*(n+1)) /2;

    cout << "Total value is : " << total << endl;


    */

    return 0;
}